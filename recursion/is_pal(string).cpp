#include<bits/stdc++.h>
using namespace std;
bool is_pal(string str,int s,int e)
{
	if(s>e)
	{
		return true;
	}
	
	if(str[s]!=str[e])
	{
		return false;
	}
	s++;
	e--;
	return is_pal(str,s,e);
	
}
int main()
{
	string str;
	cin>>str;
	int sizee=str.size();

	if(is_pal(str,0,sizee-1)==true)
	{
		cout<<"palindrome"<<endl;
	}
	else
	{
		cout<<"not"<<endl;
	}
}
