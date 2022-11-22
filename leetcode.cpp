#include<bits/stdc++.h>
using namespace std;
int sum1(int arr[],int size)
{
	int sum =0;
	
	for(int i=0;i<size;i++)
	{
		sum = sum+arr[i];
	}
	return sum;
}
bool iseq(int arr1[],int arr2[],int size)
{
	for(int i=0;i<size;i++)
	{
		if(arr1[i]!=arr2[i])
		{
			return false;
		}
	}
	return true;
}
bool ispo(int arr[],int size)
{
	int arrn[size];
	
	for(int i=0;i<size;i++)
	{
		arrn[i]=1;
	}
	
	int sum;
	
	for(int i=0;i<size;i++)
	{
		sum = sum1(arrn,size);
		arrn[i]=sum;
	}
	
	sort(arr,arr+size);
	
	if(iseq(arr,arrn,size)==true)
	{
		return true;
	}
	return false;
	
	
}
int main()
{
	int arr[4]={1,1,1,2};
	
	if(ispo(arr,4)==true)
	{
		cout<<"yes possible: ";
	}
	else
	{
		cout<<" not possible :";
	}
}
