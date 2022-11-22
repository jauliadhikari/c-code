#include<bits/stdc++.h>
using namespace std;
int occ(string str,char key)
{
	int count =0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==key)
		{
			count++;
		}
	}
	return count;
}
bool is_check(string str,char key)
{
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==key)
		{
			return true;
		}
	}
	return false;
}
void printdub(string str)
{
	string uc;
	
	for(int i=0;i<str.size();i++)
	{
		if(is_check(uc,str[i])==false)
		{
			int r = occ(str,str[i]);
			uc = uc+str[i];
			cout<<str[i]<<" occurs : "<<r<<" times : "<<endl;
		}
	}
	
}
int main()
{
	string str;
	
	cin>>str;
	
	
	printdub(str);
}
