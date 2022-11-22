#include<iostream>
using namespace std;
int addition(int num)
{   int sum;
	cout<<"sum of n nautral numbers:enter value "<<endl;
	for(int i=num;i>0;i--)
	{
		sum=sum+i;
	}
	return sum;
}
int main()
{   int sum,x;
	x=addition(4);
	cout<<x<<endl;
}
