// geeksforgeeks
#include<bits/stdc++.h>
using namespace std;
bool is_find(char ch,string s)
{   
    for(int i=0;i<s.size();i++)
    {
	   if(ch==s[i])
	    return true;
	}
	return false;
}
int main()
{
	string str;
	cin>>str;
	
	for(int i=0;i<str.size();i++)
	{
	    if(is_find(str[i],str)==false)
	    {
	    	cout<<str[i];
	    	break;
		}
	}
	
}
