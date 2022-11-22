#include<iostream>
using namespace std;
bool is_prime(int x)
{
	for(int i=2;i<x;i++)
	{
	   if(x%i==0)
	   {
	   return false;
       }
	}
	return true;
}
void ans(int x)
{
	if(x==0)
	{
		return;
	}
	if(is_prime(x)==true)
	{
		cout<<x<<"is prime"<<endl;
	}
	ans(x-1);
}
int main()
{
	ans(10);
}
