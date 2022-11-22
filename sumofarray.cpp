#include<iostream>
using namespace std; 
int main()
{
	int arr[5]={1,2,3,4,5};
	int size =5,temp=0,j=0;
	for(int i=0;i<size;i++)
	{
		temp=temp+arr[i];
		arr[j++]=temp;
	}
	for(int j=0;j<size;j++)
	{
		cout<<arr[j]<<endl;;
	}
}
