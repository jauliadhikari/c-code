#include<iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
	if(size==0)
	{
		return false;
	}
	if(arr[0]==key)
	{
		return true;
	}
	
	search(arr+1,size-1,key);
	
	
}
int main()
{
	int arr[5]={1,3,2,5,6};
	int size=5;
	int key=0;
	cin>>key;
	if(search(arr,size,key)==false)
	{
		cout<<"not present"<<endl;
	}
	else
	{
		cout<<"yes"<<endl;
	}
}
