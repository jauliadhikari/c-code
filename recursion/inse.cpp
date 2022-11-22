#include<iostream>
using namespace std;
void insert(int arr[],int size)
{
	for(int i=1;i<size;i++)
	{
		int temp=arr[i],j;
		for( j=i-1;j>=0;j--)
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
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[6]={1,5,8,90,3,4};
	int size=6;
	insert(arr,size);
	print(arr,size);
}
