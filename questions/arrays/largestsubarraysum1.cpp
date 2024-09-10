//As the heading depicts here we have to iterate through the given array and find the max sum

//1.Brute-Force approach- O(N^3)

#include<iostream>
using namespace std;

int MAX_SUBSUM(int arr[],int size) //arr[] & *arr are same here , as array is passed by reference in c++
{
    int max_subarray_sum=0;
for(int i=0;i<size;i++)
{
    for(int j=i;j<size;j++)
    {
        int current_subarray_sum=0;
        for(int k=i;k<=j;k++)
        {
            current_subarray_sum+=arr[k];
        }
        max_subarray_sum=max(max_subarray_sum,current_subarray_sum);
    }
}
    return max_subarray_sum;
}

int main()
{
    int arr[]={-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=MAX_SUBSUM(arr,size);
    cout<<"THE MAX_SUB_ARRAY_SUM IS : "<<ans;
}