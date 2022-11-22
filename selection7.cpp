#include<iostream>
using namespace std;
void sel(int arr[],int size)
{   int min,j;
	for(int i=0;i<size-1;i++)
	{    min=i;
		for(int j=i+1;j<size-1;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}swap(arr[min],arr[i]);
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
	int arr[6]={23,12,22,11,32,45};
	sel(arr,6);
	print(arr,6);
}
