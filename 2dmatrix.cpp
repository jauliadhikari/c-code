#include<bits/stdc++.h>
using namespace std;
bool search(int arr[][3],int key,int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]==key)
			{
				return true;
				break;
			}
		}
	}return false;	
}
int main()
{
	int n,sum=0;
	cout<<"enter the dimension of matrix";
	cin>>n;
	int arr[3][3];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	// row sum logic
	/* for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j];
			sum=sum+arr[i][j];
		}
		cout<<" row sum "<<i+1<<"is"<<sum;
		cout<<endl;
		sum=0;
	}*/
	int key;
	cout<<"key enter";
	cin>>key;
	cout<<search(arr,key,2,2);

	
}
