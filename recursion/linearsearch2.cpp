#include<iostream>
using namespace std;
bool ls(int arr[],int size,int key)
{
	if(size==0)
	{
		return 0;
	}
	if(arr[0]!=key)
	{
		return false;
	}
	
	ls(arr+1,size-1,key);
	
	return true;
}
int main()
{
	int arr[5]={2,4,6,7,8};
	int size=5;
	int key;
	cin>>key;
	if(ls(arr,size,key)==true)
	{
		cout<<"present"<<endl;
	}
	else
	{
		cout<<"not present"<<endl;
	}
}
