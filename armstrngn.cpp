#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int digit,n=0,temp,sum=0;
	cin>>digit;
	int copy=digit; 
	int num=digit;                              
	while(digit!=0)
	{
		digit=digit/10;
		n++;
	}
	while(copy!=0)
	{
		temp=copy%10;
		sum=sum+pow(temp,n);
		copy=copy/10;
	}
	if(sum==num)
	{
		cout<<"yes armstrng"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
	
	
	
	
}
