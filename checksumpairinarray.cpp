#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[6]={11, 15, 6, 8, 9, 10};
	int sum=16,temp=0,count=0,size=6;
	
	for(int i=0;i<size;i++)
	{ temp=arr[i];
		for(int j=i+1;j<size;j++)
		{
			if(temp+arr[j]==sum)
			{   count++;
				cout<<"("<<temp<<","<<arr[j]<<")"<<endl;
			}
		}
	}cout<<" num of pair "<<count<<endl;
}
