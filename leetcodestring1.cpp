#include<bits\stdc++.h>
#include<string>
using namespace std;
bool barak(string s)
{
	stack <char> st;
	
	for(int i=0;i<s.length();i++)        ({})
	{
		if(s[i]=='(' || s[i]=='[' || s[i] == '{')
		{
			st.push(s[i]);
		}
		if(s[i]==')' || s[i]==']' || s[i] == '}')
		{
			if(st.empty()==1)
			{
				return false;
			}
			else
			{
				st.pop();      
			}
		}
		
	}
	if(st.empty()==1)
	{
		return true;
	}
}
int main()
{
	string str;
	getline(cin,str);
	
	cout<<barak(str);
	
}
