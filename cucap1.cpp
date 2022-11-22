#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of array :"<<endl;
	cin>>n;
	int arr[n];
	int last[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for(int i = 0;i<n;i++)
	{
		last[i]=arr[i]%10;
	}
	
	
	if(last[n-1]==0)
	{
		cout<<"divisible"<<endl;
	}
	else
	{
		cout<<"not divisible :"<<endl;
	}
}
