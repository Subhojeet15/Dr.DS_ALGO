//FIND DISPLACEMENT : GIVEN A LONG ROUTE CONTAINING N,S,E,W DIRECTIONS,FIND THE SHORTEST PATH TO REACH THE LOCATION

/*SAMPLE INPUT:SNNNEWE
SAMPLE OUTPUT: NNE
*/

#include<iostream>
using namespace std;

int main()
{
    char route[1000];
    cin.getline(route,1000);
    int x=0;    //x-axis
    int y=0;    //y-axis 
    for(int i=0;route[i]!='\0';i++)
    {
        switch (route[i])
        {
        case 'N':y++;
            break;
        case 'S':y--;
            break;
        case 'E':x++;
            break;
        case 'W':x--;
            break;
      
        }
    }
    cout<<"the co-ordinates are:"<<x<<","<<y<<endl;
    if(x>=0 and y>=0){
        while(y--){
            cout<<"N";
        }
        while(x--)
        {
            cout<<"E";
        }
    }
     else if(x<=0 and y<=0){
        while(y++){
            cout<<"S";
        }
        while(x++)
        {
            cout<<"E";
        }
    }
     else if(x>=0 and y<=0){
        while(y++){
            cout<<"S";
        }
        while(x--)
        {
            cout<<"E";
        }
    }
    else  if(x<=0 and y>=0){
        while(y--){
            cout<<"N";
        }
        while(x++)
        {
            cout<<"W";
        }
    }
    return 0;
}