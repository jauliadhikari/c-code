#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str,strcp;
	getline(cin,str);
	strcp = str;
	int l = str.length();
	int count = 0;
	for(int i =0;i<l;i++)
	{
		if(str[i]==' ')
		count++;
	}
	
	reverse(strcp.begin(),strcp.end());
	
	cout<<strcp<<endl;
	
	int countcp;
	
	for(int i =0;i<l;i++)
	{
		if(str[i]==' ')
		countcp++;
	}
	
	if(count==countcp)
	cout<<"matched: "<<endl;
	else
	cout<<"not matched: "<<endl;
	
}
