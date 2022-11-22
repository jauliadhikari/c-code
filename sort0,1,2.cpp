// {0,1,2,0,1,2,0,1,2,0,1,2}=={0,0,0,1,1,1,2,2,2}
#include<iostream>
using namespace std;
int main()
{   int zero,one,two;
	int arr[6]={0,1,2,0,1,2};
	for(int i=0;i<6;i++)
	{   
		if(arr[i]==0)
		{
			zero++;
		}
		if(arr[i]==1)
		{
			one++;
		}
		else
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
	// arr[7]={0,1,1,2,1,0,2}  n(0) = 1,1 ,, n(1) = 1,1,1 n(2) = 1,1
	// arr[7] = {0,0,1,1,1,2,2}
	for(int i=zero+one;i<zero+one+two;i++)
	{
		arr[i]=2;
	}
	for(int i=0;i<7;i++)
	{
		cout<<arr[i]<<" ";
	}
}
