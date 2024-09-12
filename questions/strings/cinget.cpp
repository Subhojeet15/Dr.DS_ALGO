#include<iostream>
using namespace std;

int main()
{
    char ch=cin.get();   //reads the very first character
    int alphabets=0;
    int digits=0;
    int spaces =0;
    
    while(ch!='\n')
    {
        if((ch>='a' and ch<='z') or (ch>='a' and ch<='z'))
        {
            alphabets++;
        }
        else if(ch>='0' and ch <='9')
        {
            digits++;
        }
        else if(ch==' ' or ch== '\t')
        {
            spaces++;
        }
        ch=cin.get();       //reads the rest of the character because of while loop
    }
    cout<<"Alphabets: "<<alphabets<<endl;
    cout<<"Digits: "<<digits<<endl;
    cout<<"Spaces: "<<spaces<<endl;
    return 0;
}