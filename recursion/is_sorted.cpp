#include<iostream>
using namespace std;
bool is_sorted(int arr[],int size)
{
	if(size==1)
	{
		return true;
	}
	if(arr[0]>arr[1])
	{
		return false;
	}
	
	is_sorted(arr+1,size-1);
	
	
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int size=5;
	if((is_sorted(arr,size))==true)
	{
		cout<<"yes sorted"<<endl;
	}
	else
	{
		cout<<"not sorted"<<endl;
	}
}
