#include<iostream>
using namespace std;
 
struct Node{
    int data;
    struct Node * next;
};

    struct Node* top = NULL;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next; 
    }
}
 
int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 
 int isEmpty(struct Node* top){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct Node* push(struct Node* top, int x){
    if(isFull(top)){
        printf("Stack Overflow\n");
    }
    else{
        struct Node* n = (struct Node*)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
} 

 int pop(struct Node* tp){
    if(isEmpty(tp)){
        printf("Stack Underflow\n");
    }
    else{
        struct Node* n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x; 
    }
}

int peek(int pos){

struct Node* ptr=top;
for(int i=0;(i<pos-1 && ptr!=NULL);i++){

ptr = ptr->next;

}

if(ptr!=NULL){


    return ptr->data;
}

}

int main(){
 

   top= push(top,32);
   top= push(top,9);
   top= push(top,65);
   top= push(top,54);

    int element = pop(top);
    cout<<"Popped element : "<<element<<endl;
    linkedListTraversal(top);

    for(int j=1;j<=4;j++){

        cout<<"Value at pos "<<j<<" is "<<peek(j)<<endl;
    }
    return 0;
}
