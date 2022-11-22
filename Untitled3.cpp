#include<iostream>
using namespace std;
int mimum(int arr[],int size)
{
	int i=0;
	int temp = arr[i];
	for(int j=1;j<size;j++)
	{
		if(arr[i]>arr[j])
		{
			temp=arr[j];
			i=j;
		}
	} return temp;
}
int max(int arr[],int size)
{
	int i=0;
	int temp=arr[i];
	for(int j=1;j<size;j++)
	{
		if(arr[i]<arr[j])
		{
			temp=arr[j];
			i=j;
		}
	} return temp;
}
int main()
{   int arr[5]={1,2,3,4,5};
	cout<<min(arr,5)<<endl;
	cout<<max(arr,5)<<endl;
}
