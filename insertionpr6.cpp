#include<iostream>
using namespace std;
void insert(int arr[],int size)
{   int temp,j;
	for(int i=1;i<size;i++)
	{   temp=arr[i];
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
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[6]={78,67,98,56,45,34};
	insert(arr,6);
	print(arr,6);
}
