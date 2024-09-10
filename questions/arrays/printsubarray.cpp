#include<iostream>
using namespace std;
void printsubarray(int arr[],int size){
    for(int i=0;i<size;i++){                 //10,20,30,40,50,60
        for(int j=i;j<size;j++)                            //i ------------> j
    {
        for(int k=i;k<=j;k++){               // k starts at i and ends till j to be printed
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int arraysize=sizeof(arr)/sizeof(int);
    printsubarray(arr,arraysize);
    return 0;
}