#include<iostream>
using namespace std;
int main()
{   int row=3,col=3;
	int arr[3][3],sum,result;
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
			sum=sum+arr[i][j];
		}
	}
	
	result=sum/(row*col);
	cout<<result;
	
}
