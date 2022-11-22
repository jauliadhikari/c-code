#include<iostream>
using namespace std;
void insertion(int arr[],int size)
{
	for(int i=1;i<size-1;i++)
	{
		int temp=arr[i],j;
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]>temp)
			{
				arr[j+1]=arr[j];
			}
			else
			{
				break;
			}
			
		}arr[j+1]=temp;
	}
}
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[5]={4,1,2,9,7};
	int size=5;
	insertion(arr,size);
	print(arr,size);
}
