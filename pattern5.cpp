#include<iostream>
using namespace std;
int main()
{   int k=4,count=1;
	int looper;
	for(int i=1;i<=4;i++)
	{
		looper = k-i;
		for(int j=1;j<=looper;j++)
		{
			cout<<" ";
			
		}cout<<count++<<endl;
	}
}
