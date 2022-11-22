#include<iostream>
using namespace std;
int main()
{
	int k=5,looper=0;
	for(int i=1;i<=5;i++)
	{
		looper = k-i;
		for(int j=1;j<=looper;j++)
		{
			cout<<" ";
			
		}
		for(int j=1;j<=i;j++)
		{
			cout<<j;
		}cout<<endl;
	}
}
