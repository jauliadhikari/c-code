#include<iostream>
using namespace std;
bool insorted(int arr[],int size)
{
	int check=0;
	for(int i =0;i<size;i++)
	{
		if(arr[i]<arr[i+1])
		{
			check++;
		}
	}
	//cout<<check;
	if(check == size-1)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
bool outsorted(int arr[],int size)
{
	int check=0;
	for(int i =0;i<size;i++)
	{
		if(arr[i]>arr[i+1])
		{
			check++;
		}
	}
	
	if(check == size)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
int main()
{
	int arr[5];
	for(int i =0;i<5;i++)
	{
		cin>>arr[i];
	}
	//bool parth;
	//parth = 
	if(insorted(arr,5))
	{
		cout<<"increasingly sorted :"<<endl;
	}
	else
	{
		if(outsorted(arr,5))
		{
			cout<<"decreasingly sorted :"<<endl;
		}
		else
		{
			cout<<"unsorted :"<<endl;
		}
	}
}

