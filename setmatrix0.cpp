#include<iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,0},{4,0,6},{7,8,9}};
	
	for(int i =0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(arr[i][j]==0)
			{
				for(int z=0;z<3;z++)
				{
					if(arr[i][z]!=0)
					{
						arr[i][z]=-1;
					}
				}
				for(int z=0;z<3;z++)
				{
					if(arr[z][j]!=0)
					{
						arr[z][j]=-1;
					}
				}
			}
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(arr[i][j]==-1)
			{
				arr[i][j]=0;
			}
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
	
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
}
