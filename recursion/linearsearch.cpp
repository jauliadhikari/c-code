#include<iostream>
using namespace std;
bool linear(int arr[],int size,int key)
{
	if(size==0)
	{
		return false;
	}
	else if(arr[0]==key)
	{
		return true;
	}
	linear(arr+1,size-1,key);
	
	
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int size=5;
	int key=2;
	if(linear(arr,size,key)==true)
	{
		cout<<"present"<<endl;
	}
	else
	{
		cout<<"not present"<<endl;
	}
}
