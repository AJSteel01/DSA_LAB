#include<iostream>
using namespace std ;
void binarySearch(int arr[], int n , int key){
    int start=0;
    int end=n;
    while(start<=end){

        int mid=(start+end)/2;

        if(arr[mid]==key){
            cout<<"the element is found"<<endl;
            break;
        }else if(arr[mid]>key){
            end=mid-1;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            cout<<"Element not found"<<endl;
        }
    }
}
int main (){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array in sorted order "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Display the array 

    cout<<"The given array is :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

    int key;
    cout<<"Enter the element You want to search : ";
    cin>>key;
    binarySearch(arr,n,key);
    return 0;
}