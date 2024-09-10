//2nd approach: Prefix sum(where we store the sum in an different array so that we can remove the [k-loop used in previous problem] linearly)
//T.C:O(N^2)or O(N^2+N)[for 3 loops(but not nested together)]

#include<iostream>
using namespace std;

int MAX_SUBSUM(int arr[],int size)
{
    int prefix_sum_arr[size]={0};
    prefix_sum_arr[0]=arr[0];       //prefix array to store the sum-up
    for(int i=1;i<size;i++)
    {
        prefix_sum_arr[i]=prefix_sum_arr[i-1]+arr[i];
    }
    //largest sum logic
    int maxsum=0;
    int sub_sum=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++){
      
          sub_sum= i >0?prefix_sum_arr[j]-prefix_sum_arr[i-1]:prefix_sum_arr[j];  //if(i>0){sub_sum=prefix_sum_arr[j]-prefixsum[i-1](as i!=0)}else{return prefix_sum_arr[j]}
        maxsum=max(maxsum,sub_sum);
        } //i is for the staring range of the sub-array sum,   j is for the end endpoint of the sub-array sum
    }
    return maxsum;
}



int main()
{
    int arr[]={-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=MAX_SUBSUM(arr,size);
    cout<<"THE MAX_SUB_ARRAY_SUM IS : "<<ans;
}