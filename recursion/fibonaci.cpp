#include<bits/stdc++.h>
using namespace std;
int fib(int x)
{
	if(x==0)
	{
		return 0;
	}
	if(x==1)
	{
		return 1;
	}
	
	int r=fib(x-1)+fib(x-2);
	return r;
}
int main()
{
	int x;
	cin>>x;
	cout<<fib(x);
	
}
