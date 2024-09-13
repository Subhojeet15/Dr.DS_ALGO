/*Sorted Pair Sum
Given a sorted array and a number x, find a pair in array whose sum is closest to x.

Input Format

In the function an integer vector and number x is passed.

Output Format

Return a pair of integers.



Sample Input

{10, 22, 28, 29, 30, 40}, x = 54


Sample Output

22 and 30
*/

#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    // your code goes here
    int left_index,right_index;    //used to take care of the index to return the value  current sum=[left_index+right_index]
    int start=0;
    int end=arr.size()-1;
    int difference=INT_MAX;         //based on the difference we can the conclude which two index value sums close upto x(given target);
    while(start<=end)
    {
        int current_sum=arr[start]+arr[end];
        if(abs(current_sum-x)<difference){
         left_index=start;
          right_index=end;
         difference=abs(current_sum-x);
        }
        if(current_sum>x){
            end--;                                  //because if we increase start++ then the current sum will increase,so we mave the end pointer
        }
        else{
            start++;                                  //if we move end-- then the current sum will decrease,so we move
        }
    }
    return{arr[left_index],arr[right_index]};
}