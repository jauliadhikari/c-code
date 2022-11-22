#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cout<<"enter name:"<<endl;
	cin>>s1;
	s2=s1;
	reverse(s1.begin(),s1.end());
	if(s1==s2)
	{
		cout<<"palindrome"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
	
} 
