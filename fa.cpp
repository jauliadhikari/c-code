#include<iostream>
using namespace std;
int fact(int x)
{
	int temp=x;
	for(int i=1;i<x;i++)
	{
		temp=temp*i;
	}
	return temp;
}
int main()
{
	cout<<fact(5)<<endl;
}
