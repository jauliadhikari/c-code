#include<iostream>
using namespace std;
int reverse(int x)
{
	if(x==0)
	{
		return 0;
	}
	else
	{
		cout<<x<<endl;
		reverse(x-1);
	}
}
int main()
{
	cout<<reverse(100)<<endl;
}
