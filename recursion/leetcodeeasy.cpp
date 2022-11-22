#include<bits/stdc++.h>
using namespace std;
bool is_pr(char str,string s)
{
	for(int i=0;i<s.size();i++)
	{
		if(str==s[i])
		{
			return true;
		}
		
	}
	return false;
}
bool is_ch2(string str)
{
	string s1="qwertyuiop";
	string s2="asdfghjkl";
	string s3="zxcvbnm";
	
	for(int i=0;i<str.size();i++)
	{
		if(is_pr(str[i],s2)==false)
		return false;
	}
	return true;
}
bool is_ch3(string str)
{
	string s1="qwertyuiop";
	string s2="asdfghjkl";
	string s3="zxcvbnm";
	
	for(int i=0;i<str.size();i++)
	{
		if(is_pr(str[i],s3)==false)
		return false;
		
	}
	return true;
}
bool is_ch1(string str)
{
	string s1="qwertyuiop";
	string s2="asdfghjkl";
	string s3="zxcvbnm";
	
	for(int i=0;i<str.size();i++)
	{
		if(is_pr(str[i],s1)==false)
		return false;
		
	}
	return true;
}
vector<string> keyboard(vector<string> v)
{
	vector<string> ans;
	for(int i=0;i<v.size();i++)
	{
		if(is_ch1(v[i]) || is_ch2(v[i]) || is_ch3(v[i]))
		{
			ans.push_back(v[i]);
		}
	}
	return ans;
}
int main()
{
	vector<string> v;
	
	string str;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		v.push_back(str);
	}
	
	vector<string> ans=keyboard(v);
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<"words in same line of keyboard---->> " <<ans[i]<<endl;
	}
	
	
}
