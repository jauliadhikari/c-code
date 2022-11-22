#include<iostream>
using namespace std;
int main()
{
	int row,col,temp=0;
	cout<<"enter row and col size:"<<endl;
	cin>>row>>col;
	int arr[row][col];                              
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
		
	}  
	for(int i=0;i<row;i++)
	{ 
	    for(int j=0;j<col;j++)
		{
		temp=temp+arr[i][j];
	    }
	}                          
	cout<<temp;
}                                      
 5 min
