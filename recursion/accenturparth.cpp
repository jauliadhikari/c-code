// ppppparth t      tttttarth
#include<bits/stdc++.h>
using namespace std;
void fun(string str,char c)
{
	map<char,int> m;
	
	for(int i=0;i<str.size();i++)
	{
		m[str[i]]++;
	}
	int max=0;
	for(auto i : m)
	{
		if(max<i.second)
		{
			max = i.second;
		}
	}
	char f;
	for(auto i : m)
	{
		if(max == i.second)
		{
			f = i.first;	
		}	
	}	
	
	for(int i=0;i<str.size();i++)
	{
		if(str[i] == f)
		{
			str[i] = c;
		}
	}
	
	
	cout<<str;
}



int main()
{
	string str;
	char c;
	cout<<"enter string first then char";
	cin>>str;
	cin>>c;
	
	fun(str,c);
	
	
}
