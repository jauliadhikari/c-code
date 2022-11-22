#include<iostream>
using namespace std;
int sum(int x)
{
	if(x==0)
	{
		return 0;
	}
	else
	{
	   int add=x+sum(x-1);
	   return add;
	}
}
int main()
{
	cout<<sum(3)<<endl;
}
