#include<iostream>
using namespace std;
int main()
{
	int j,size,arr[size],temp=0;
	cout<<"enter size of array"<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	int max = arr[0];
	for(int i=1;i<size;i++)
	{
		if(max<arr[i])
		{
			max = arr[i];
		}
	}
	
	cout<<max;
}
