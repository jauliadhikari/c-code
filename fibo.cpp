#include<iostream>
using namespace std;
int fib(int x,int y,int n)
{   int ans=0;
    if(n==0)
    {
    	return x;
	}
	for(int i=2;i<=n;i++)
	{   
		ans=x+y;
		x=y;
		y=ans;
	}
	return ans;
}
int main()
{
	int x=0;
	int y=1;
	int n;
	cin>>n;
	cout<<fib(x,y,n);
	
}
