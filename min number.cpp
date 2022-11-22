#include<iostream>
using namespace std;
int max( int arr[],int size)
{
	int i=0;
	int j=1;
	int temp=arr[i];
	for(int j=1;j<size;j++)
	{
		if(arr[i]<arr[j])
		{
			temp=arr[j];
			i = j;
		}
	}
	return temp;
}
int main()
{

int arr[5]={1,233,6633,4,5};
cout<<max(arr,5);
}
