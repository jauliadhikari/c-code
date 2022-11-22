#include<bits/stdc++.h>
using namespace std;
bool isval(string str)
{
	stack<char> st;
	
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='('|| str[i]=='{'|| str[i]=='[')
		{
			st.push(str[i]);
		}
		else
		{
			if(str[i]==')' && '(' != st.top())
			return false;
			if(str[i]=='}' && '{' != st.top())
			return false;
			if(str[i]==']' && '[' != st.top())
			return false;
			
			
			st.pop();
		}
		
		
		if(st.empty()==true)
		return true;
		if(st.empty()==false)
		return false;
		
	}
}
int main()
{
	string str;
	
	cin>>str;
	
	
	isval(str);
}
