#include<iostream>
using namespace std;
bool search(int arr[][3],int row,int col,int key)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]==key)
			{
				return true;
			}
			
		}
	}return false;
}

int main()
{
	int arr[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)     
		{
			cin>>arr[i][j];     
		}
	}		
	if(search(arr,3,3,15)==0)
	{
		cout<<"no :" <<endl;
	}
	else
	{
		cout<<"yes"<<endl;  
	}
}
