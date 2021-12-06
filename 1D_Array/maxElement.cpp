#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr[n];
    //creating the array 

    for(int i=0 ; i<n;i++){
        cin>>arr[i];
    }

    //Displaying given array
    cout<<"the given array is "<<endl;

    for(int i=0 ; i<n; i++){
        cout<<arr[i]<<" ";
   }
   int max=arr[0];
    cout<<"\nmaximum of element in the given array is "<<endl;
   for(int i =1; i<n; i++){
       if(max<arr[i]){
           max=arr[i];
       }
   }

   cout<<max<<endl;

}