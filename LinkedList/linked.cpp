#include<iostream>
using namespace std;

struct Node{

int data;

struct Node* next;

};

void linkedlist_traversal( struct Node *ptr){

    while(ptr !=NULL){

    cout<<"Element: "<<ptr->data<<"\n";
    
    
    ptr=ptr->next;


    }
}


struct Node* insert_in_between(struct Node *head,int data,int index){

struct Node * ptr= (struct Node*)malloc(sizeof(struct Node));

struct Node * p= head;

int i=0;

while(i != index-1){

p = p->next;

i++;

}

ptr->data=data; //Assigning some data to ptr node
ptr->next = p->next;
p->next = ptr;
return head;
}

struct Node* deleting_between_node(struct Node *head,int index){

struct Node *p=head;
struct Node *q= head->next;
int i=0;

while(i!= index-1){

p=p->next;  //Inorder to move p forward till that index reaches the given index
q=q->next;  //Inorder to move q forward till that index reaches the given index

i++;
}


p->next=q->next;

free(q);

return head;

}

int findlength(struct Node *head){

int count = 0;
struct Node* ptr = head;

while(ptr != NULL){

count++;
ptr = ptr->next;

}

return count;

}

void Split(struct Node *head,struct Node **front,struct Node **back){

int leng = findlength(head);
if(leng <2){

    *front = head;
    *back = NULL;
    return;
}

struct Node* current = head;

int hopCount = (leng -1)/2;
for(int i=0;i< hopCount;i++){
current=current->next;
}

*front = head;
*back  = current->next;
current->next = NULL;  

}

void bubbleSort(int *a,int n){

for(int i=0;i<n-1;i++){

for(int j=0;j<n-i-1;j++){

if(a[j]>a[j+1]){

int temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;

}

}

}

}

int main(){

struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;
struct Node *fifth;
struct Node *sixth;


// Allocate memory in the linked list in heap
head = (struct Node*)malloc(sizeof(struct Node));

second = (struct Node*)malloc(sizeof(struct Node));

third = (struct Node*)malloc(sizeof(struct Node));

fourth = (struct Node*)malloc(sizeof(struct Node));

fifth = (struct Node*)malloc(sizeof(struct Node));

sixth = (struct Node*)malloc(sizeof(struct Node));


// Link first and second nodes
    head->data=10;
    head->next=second;

// Link second and third nodes
    second->data=5;
    second->next=third;

// Link third and fourth nodes
    third->data = 2;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 17;
    fourth->next = fifth;

    fifth->data = 12;
    fifth->next = sixth;

    sixth->data = 26;
    sixth->next = NULL;

    cout<<"\nOriginal LinkedList\n";
    linkedlist_traversal(head);

    // head = insert_at_first(head,87);
    head = insert_in_between(head,97,4);
        // head = insert_at_end(head,96);
        // head = insert_after_node(head,second,101);

    cout<<"\nAfter Function Use\n";

    linkedlist_traversal(head);
    deleting_between_node(head,5);
    cout<<"\nAfter Using Deletion\n";

    linkedlist_traversal(head);
  
     struct Node *a = NULL, *b = NULL;
     Split(head,&a,&b);
    // print linked list
    printf("Front List: \n");
    linkedlist_traversal(a);
 
    printf("\nBack List:\n ");
   linkedlist_traversal(b);
    return 0;
}