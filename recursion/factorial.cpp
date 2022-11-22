#include<iostream>
using namespace std;
int fact(int n)
{
	
	if(n==0)
	{
		return 1;
	}
	
	int t = n * fact(n-1);
	
	return t;
	
}
int main()
{
	int n;
	
	cin>>n;
	
	cout<<fact(n);	
}
