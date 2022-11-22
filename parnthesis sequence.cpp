#include<bits/stdc++.h>
using namespace std;
bool is_valid(string str)
{  
    stack <char> st;
    for(int i=0;i<str.size();i++)
    {
    	if(str[i]=='(' || str[i]=='{' || str[i]=='[')
    	{
    		st.push(str[i]);
		}
		else
		{
			if(str[i]==')' && '('!=st.top())
			{
				return false;
			}
			if(str[i]=='}' && '{'!=st.top())
			{
				return false;
			}
			if(str[i]==']' && '['!=st.top())
			{
				return false;
			}
			
			st.pop();
		}
		
	} return st.empty();

}
int main()
{
	string str;
	cin>>str;
	
	if(is_valid(str)==true)
	{
		cout<<"valid"<<endl;
	}
	else
	{
		cout<<"not valid"<<endl;
	}
}
