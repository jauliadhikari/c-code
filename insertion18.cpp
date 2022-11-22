#include<iostream>
using namespace std;
void insert(int arr[],int size)
{
	int temp=0,j;
	for(int i=1;i<size;i++)
	{    temp=arr[i];
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
	int arr[5]={2,7,5,9,1};
	int size=5;
	
	insert(arr,size);
	
	print(arr,size);
}
