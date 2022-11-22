#include<iostream>
using namespace std;
void insert(int arr[],int size)
{
	int j,temp;
	for(int i =1;i<size;i++)
	{
		temp = arr[i];
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
		}
		arr[j+1]=temp;
	} 
}
void print(int arr[],int size)
      {
	for(int i =0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[4]={8,4,0,5};
	
	insert(arr,4);
	print(arr,4);
}
