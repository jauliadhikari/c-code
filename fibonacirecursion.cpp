#include<iostream>
using namespace std;
int fibo(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
	int num =fibo(n-1)+fibo(n-2);
	return num;
    }
}
int main()
{   
    int x;
    cin>>x;
	cout<<fibo(x);
}
