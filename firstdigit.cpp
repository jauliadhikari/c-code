#include<iostream>
using namespace std;
int main()                         
{
	int temp,x;
	cin>>x;
	while(x!=0)
	{   
	temp=x%10;
	x = x/10;
	}
	cout<<temp<<endl;
}
