#include<iostream>
using namespace std;
int min(int arr[],int size)
{
	int temp=INT_MAX;
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]<temp)
		{
			temp=arr[i];
		}
	}return temp;
}
int max(int arr[],int size)
{
	int temp=INT_MIN;
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]>temp)
		{
			temp=arr[i];
		}
	}return temp;
}

int main()
{
	int arr[5]={12,45,33,77,90};
	int size=5;
	
	cout<<"max value"<<" "<<max(arr,size)<<endl;
	cout<<"min value"<<" "<<min(arr,size);
	
}
