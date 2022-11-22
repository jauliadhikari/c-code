#include<iostream>
using namespace std;
bool  is_sorted(int arr[],int size)
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
	int arr[5]={1,2,9,4,5};
	int size =5;
	
	if(is_sorted(arr,size)==false)
	{
		cout<<"no sorted"<<endl;
	}
	else
	{
		cout<<"yes sorted"<<endl;
	}
	
}
