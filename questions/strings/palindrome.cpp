/*Check Palindrome
Given a string, write a c function to check if it is palindrome or not.

A string is said to be palindrome if reverse of the string is same as string. For example, “abba” is palindrome, but “abbc” is not palindrome.

Input Format

In the function a string is passed.

Output Format

Return true if it is palindrome else false.



Sample Input

abcdcba


Sample Output

true
*/

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    // your code goes here
    int start=0;
    int end=str.length()-1;
    while(start<=end)
    {
  if(str[start]!=str[end])
  {
      return false;
  }
  start++;
  end--;
    }
    return true;
}  

//or 


#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    // your code goes here
string st=str;
reverse(st.begin(),st.end());
if(st==str)
return true;
else
return false;
}  

