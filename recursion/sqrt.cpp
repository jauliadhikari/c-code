#include<bits/stdc++.h>
using namespace std;
int sqrt(int x,int s,int e)
{       
      
	int mid=s+(e-s)/2;                
	if(s>e)
	{
		return 0;
	}
	
	if(mid*mid==x)
	{
		return mid;
	}
	
	if(mid*mid>x)
	{
		return sqrt(x,s,mid-1);
	}
	
	if(mid*mid<x)
	{
		return sqrt(x,mid+1,e);
	}
	
	
}
int main()
{
	int x;
	cout<<"enter number for calculating square root"<<endl;
	cin>>x;
    cout<<sqrt(x,0,x/2);
}
