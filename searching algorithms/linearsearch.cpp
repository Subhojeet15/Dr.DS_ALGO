#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1; //out of loop means element not found
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    int index=linear_search(arr,n,key);
    if(index!=-1){
        cout<<"Element found at index "<<index<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
        }
        // The code is written in C++ and it performs a linear search on an array. The function
        return 0;
}