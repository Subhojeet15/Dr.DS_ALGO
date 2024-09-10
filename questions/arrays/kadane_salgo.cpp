/* Kadane's algorithm is used to find the maximum sub-array sum in O(N) Linear Time,  it suggests to keep track and update the maximum positive number
encountered so far, but as soon as we get a negetive number and sub-array sum(<0)then we re-initialize it to 0;*/

#include<iostream>
using namespace std;

int MAX_SUB_ARRAY_SUM(int arr[],int size)
{
    int current_sum=0;
    int max_sum=0;
    for(int i=0;i<size;i++)
    {
        current_sum=current_sum+arr[i];
        max_sum=max(current_sum,max_sum);    //if arr[0]=[-1], then also it will handle the case, it handles all the edge cases
        if(current_sum<0)
        {
            current_sum=0;
        }
    }
    return max_sum;
}

int main()
{
    int arr[]={-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=MAX_SUB_ARRAY_SUM(arr,size);
    cout<<"THE MAX_SUB_ARRAY_SUM IS : "<<ans;
}