#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>y;
        if(y<38)
        {
            cout<<y<<endl;
        }
        else 
        {   
            int rem =  y % 5;
            int diff=5-rem;
            if(diff < 3)
            {
            y = y+diff;
            }
            cout<<y<<endl;
        }
    }
}
