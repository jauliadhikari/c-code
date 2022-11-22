#include<iostream>
using namespace std;
void count(int arr[],int size)
{
	
	int zero=0,one=0,two=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==0)
		{
			zero++;
		}
		if(arr[i]==1)
		{
			one++;
		}
		if(arr[i]==2)
		{
			two++;
		}
	}
	for(int i=0;i<zero;i++)
	{
	      arr[i]=0;
	}
	for(int i=zero;i<zero+one;i++)
	{
		  arr[i]=1;
	}
	for(int i=zero+one;i<zero+one+two;i++)
	{
		  arr[i]=2;
	}
}
int main()
{
	int arr[6]={1,0,2,1,0,2};
	count(arr,6);
	for(int i=0;i<6;i++)
	{
		cout<<arr[i];
	}
}
