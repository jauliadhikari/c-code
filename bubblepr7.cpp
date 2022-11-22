#include<iostream>
using namespace std;
void bubble(int arr[],int size)
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
    {
  	cout<<arr[i]<<endl;
    }
}
int main()
{
	int arr[6]={23,12,22,11,32,45};
	bubble(arr,6);
	print(arr,6);
}
