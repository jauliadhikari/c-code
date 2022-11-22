#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int size)
{   int sum1,su;
	for(int i=0;i<size;i++)
	{
		sum1=su+arr[i];
		arr[i]=sum1;
	}
	return sum1;
}
int main()
{
	int arr[3]={1,1,1};
	sum(arr,3);
	for(int i=0;i<3;i++)
	{
		cout<<arr[i]<<endl;
	}
	
}
