#include<iostream>
using namespace std;
int f(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	
	int r = f(n-1) + f(n-2);
	
	return r;
	
	
}
int main()
{
	int n;
	cin>>n;
	cout<<f(n);
	
}
