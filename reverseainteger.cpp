#include<iostream>
using namespace std;
int main()
{   int x,temp,reverse=0;
    cout<<"enter a digit"<<endl;
	cin>>x;  
	int parth=x;                  
	while(x!=0)
	{
	temp=x%10;
	reverse=reverse*10+temp;
	x=x/10;
	}
	cout<<reverse<<endl;
	if(reverse==parth)
	{
		cout<<"yes palendrome"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
}
