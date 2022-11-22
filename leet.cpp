#include<iostream>
using namespace std;
int is_sum(int arr1[],int arr2[],int size)
{   
       int sum=0;
	for(int i=0;i<size;i++)
	{   
	  
		sum=sum+arr1[i];
	
	}return sum;
}

int main()
{
	int size;
	cout<<"enter size"<<endl;
	cin>>size;
	int arr1[size],arr2[size];
	for(int i=0;i<size;i++)
	{
		arr1[i]=1;
	}
	
	is_sum(arr1,arr2,size);
	for(int i=0;i<size;i++)
	{
		cout<<arr2[i]<<endl;
	}
	
	
}
