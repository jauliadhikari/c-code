#include<iostream>
using namespace std;
void prime(int x)
{   
	int count=0;
	if(x>0)
	{
		for(int i=2;i<x;i++)
		{
			if(x%i==0)
			{
				count++;
				
			}
		}
	}
	if(count==0)
	{
		cout<<"prime"<<endl;
	}
	else
	{
		cout<<"not prime"<<endl;
	}
	
}
int main()
{   
    int x;
	cin>>x;
	prime(x);
}
