#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string x,y;
	cout<<"enter name"<<endl;
	cin>>x;
	y = x;
	reverse(x.begin(),x.end());
	cout<<x<<endl;
	if(x==y)
	{
		cout<<"yes palendrome"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
}
