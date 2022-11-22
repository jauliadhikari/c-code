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
	int arr[7]={19,2,8,5,90,1,22};
	insert(arr,7);
	print(arr,7);
	
}
