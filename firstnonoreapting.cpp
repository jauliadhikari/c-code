// geeksforgeeks
#include<bits/stdc++.h>
using namespace std;
int is_find(char ch,string s)
{  int occ =0; 
    for(int i=0;i<s.size();i++)
    {
	   if(ch==s[i])
	    occ++;
	}
	return occ;    //geeksforgeeks
}
int main()
{
	string str;
	cin>>str;
	
	for(int i=0;i<str.size();i++)
	{
	    if(is_find(str[i],str)==1)
	    {
	    	cout<<str[i];
	    	break;
		}
	}
	
}
