#include<iostream>
using namespace std;
bool ls(int arr[],int size,int key)
{
	if(size==0)
	{
		return false;
	}
	if(arr[0]==key)
	{
		return true;
	}
	bool rp=ls(arr+1,size-1,key);
	return rp;
}

int main()
{ 
   int arr[5]={8,4,2,5,1};
   cout<<ls(arr,5,12)<<endl;
	
}
