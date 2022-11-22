#include<iostream>
using namespace std;
int dub(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				cout<<arr[i]<<" "<<"dublicate"<<endl;
			}
		}
	}
}
void sortt(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int main()
{
	int arr[5]={2,5,1,2,2};
	sortt(arr,5);
	dub(arr,5);
}
