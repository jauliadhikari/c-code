#include<iostream>
using namespace std;
void rev(int arr[],int start,int end)
{
	while(start<=end)
	{
	  swap(arr[start++],arr[end--]);
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
	int arr[5]={1,2,3,4,5};
	int size=5;
	rev(arr,0,size-1);
	print(arr,size);
	
}
