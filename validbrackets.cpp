#include<bits\stdc++.h>
#include<string>
using namespace std;
bool brk(string str)
{
	stack <char> s;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='(' || str[i]=='{' || str[i]=='[')
		{
			s.push(str[i]);
		}
		if(str[i]==')' || str[i]=='}' || str[i]==']')
		{
			if(s.empty()==1)
			{
				return false;
			}
			else
			{   
				s.pop();
			}
		}
	} 
	if(s.empty()==1)
			{
				return true;
			}
}

int main()
{
	string str;
	getline(cin,str);
	cout<<brk(str);
	
}
