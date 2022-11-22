#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[8]={3, 4, 1, 9, 56, 7, 9, 12};
	int n=8;
	int m=5;
	
	sort(arr,arr+8);
	/*
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" "<<endl;
	}
	
	//1 3 4 7 9 9 12 56      8,6,8,49
	
	int min =10000;            
	int currmin =0;
	
	for(int i=0;i+m-1<n;i++)
	{
		currmin = arr[i+m-1]-arr[i];
		
		if(currmin<min)
		{
			min =currmin;
			
		}
		
	}
	
	cout<<min;
	*/
	int min =100000;
	int i=0;
	int temp=0;
	int diff=0;
	for(int j=i+m-1;j<n;j++)
	{
		temp=arr[i++];
		diff=arr[j]-temp;
		if(diff<min)
		{
			min = diff;
		}
	}
	cout<<min;
	
}






