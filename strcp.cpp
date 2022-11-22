#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string str;
	int len,count =0 ;
	getline(cin,str);
	len = str.length();
	for(int i =0;i<len;i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	
	cout<<"white spaces : "<<count<<endl;
	int count2 = 0;
	string strcp = str;
	int len2 = len;
	for(int i =0;i<len2;i++)
	{
		if(strcp[i]==' ')
		{
			count2++;
		}
	}
	
	if(count == count2)
	cout<<"same hai bhai "<<endl;
	else
	cout<<"same nhi hai bhai "<<endl;
	
}
