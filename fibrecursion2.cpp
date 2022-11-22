#include<iostream>
using namespace std;
int fib(int x)
{
	if(x==0)
	{
		return 0;
	}
	else if (x==1)
	{
		return 1;
	}
	else
	{
		int num=fib(x-1)+fib(x-2);
		return num;
	}
}
int main()
{   int x;
    cin>>x;
	cout<<fib(x)<<endl;
	
}
