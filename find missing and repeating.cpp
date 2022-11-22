#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void rep(int arr[],int size)
{   
	int r;
	for(int i=0;i<size;i++)
	{
		r = arr[i];
		for(int j=i+1;j<size;j++)
		{
			if(r==arr[j])
			{
				cout<<"repeated number : "<<r<<endl;
				break;
			}
		}
	}
	
}
bool is_pr(int key,int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		if(key==arr[i])
		{
			return true;
		}
	}
	return false;
}
void miss(int arr[],int size)
{   
	int arrs[size];
	int k=1;
	for(int i=0;i<size;i++)
	{
		arrs[i]=k;
		k++;
	}
	
	for(int i=0;i<size;i++)
	{
		if(is_pr(arrs[i],arr,size)==false)
		{
			cout<<arrs[i];
		}
	}
}

int main()
{   
	int size;
    
	size=5;
	
	int arr[size]={1,2,3,4,4};
	
	rep(arr,size);
	
	miss(arr,size);
	
}
