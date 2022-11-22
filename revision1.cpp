#include<iostream>
using namespace std;
void bs(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	cout<<arr[i]<<endl;
}
int main()
{
	int arr[7]={2,3,1,6,5,0,9};
	bs(arr,7);
	print(arr,7);
	
}





