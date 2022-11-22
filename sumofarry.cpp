#include<iostream>
using namespace std;
int main()
{
	int size,temp;
	cout<<"enter size:"<<endl;
	cin>>size;
	int arr[size];      
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		temp=temp+arr[i];
	}                          
	cout<<temp;
}                                      

