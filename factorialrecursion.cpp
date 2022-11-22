#include<iostream>
using namespace std;
int fact(int x)
{
	if(x==1)
	{
		return 1;
	}
	else
	{
		int factorial=x*fact(x-1);
		return factorial;
	}
}
int main()
{
   cout<<fact(5);
}
