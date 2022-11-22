#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[9]={1,8,6,2,5,4,8,3,7}; 
	int size =9;   
	/*            
	int size=5,l=0,b=0,x,y,temp=0;
	cin>>x>>y; */
	/*
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]==x && arr[j]==y)
			{   
			    b=j-i;
			    temp=min(x,y);
			    cout<<b*temp<<endl;
			}
			
		}
	}*/
	int max=0,temp;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			
			temp = (j-i) * min(arr[i],arr[j]);
			if(temp>max)
			{
				max = temp;
			}	
				
		}
	}
	cout<<max;
	
}
