#include<bits/stdc++.h>
using namespace std;
int occ(string str,char x)
{
	int count=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==x)
		{
			count++;
		}
	
	}
		return count;
}
int main()
{
	string str;
	cout<<"enter the string"<<endl;
	cin>>str;
	
	for(int i=0;i<str.length();i++)
	{
		cout<<"the char = "<<str[i]<<" occurence : "<<occ(str,str[i])<<endl;
	}
	
}
