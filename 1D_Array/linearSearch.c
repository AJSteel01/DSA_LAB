#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int check=0;
    //Creating the array 
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //Displaying the Array 
    printf("the given array is ");

    for(int i =0 ; i<n;i++){
        printf("%d ",arr[i]);
    }
    //Value which is needed to be searched
    printf("\nEnter the value You need to search\n");
    int k;
    scanf("%d",&k);
    //Applying Linear Search
    for( int i = 0 ;i<n ; i++){
        if(arr[i]==k){
            check=1;
            break;
        }
    }

    if(check==1){
        printf("The given elemnt is present in the array\n");
    }else{
        printf("the element is not found\n");
    }
}