#include<iostream>
using namespace std;
int sr(int arr[],int size,int key)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
}
int main()
{
	int arr[5]={1,2,3,4,5};
	
	
	cout<<sr(arr,5,4);
}
