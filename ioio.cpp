#include<iostream>
using namespace std;
int main()
{
	int counter =0;
	int k=4,looper=0;
	for(int i=1;i<=4;i++)
	{
		looper = k-i;
		for(int j=1;j<=looper;j++)
		{
			cout<<" ";
			
		}
		for(int j=1;j<=i;j++)
		{
			cout<<counter++;
		}cout<<endl;
	}
}
