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
	  return x+sum(x-1);
	}
}
int main()
{
	int x=0;
	cin>>x;
	cout<<sum(x)<<endl;
}
