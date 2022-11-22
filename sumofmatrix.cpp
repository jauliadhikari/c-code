#include<iostream>
using namespace std;
int main()
{
	int arr[3][3];
	cout<<"enter elements in array"<<endl;
	for(int i=0;i<3;i++)
	{ 
	
		for(int j=0;j<3;j++)
		{   
			cin>>arr[i][j];
		}
	}
	int arr1[3][3];
		cout<<"enter elements in array"<<endl;
	for(int i=0;i<3;i++)
	{ 
	    
		for(int j=0;j<3;j++)
		{
				cin>>arr1[i][j];
		}
	}
	
	int r[3][3];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			r[i][j]=arr[i][j]+arr1[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<r[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}
