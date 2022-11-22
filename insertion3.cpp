#include<iostream>
using namespace std;
void insertion_sort(int arr[],int size)
{   int temp,j;
	for(int i=1;i<size;i++)
	{
	   temp=arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]>temp)
			{
				arr[j+1]=arr[j];
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
	int arr[5]={5,4,3,2,1};
	insertion_sort(arr,5);
	print(arr,5);
}




