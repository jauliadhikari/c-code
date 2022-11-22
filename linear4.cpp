#include<iostream>
using namespace std;
int linear(int arr [],int size,int key)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			return i;
			break;
		}
	}
}
int main ()
{
	int arr[5]={2,9,6,5,4};
	cout<<"index num of key is-->"<<linear(arr,5,5);
}
