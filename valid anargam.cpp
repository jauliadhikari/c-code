#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
	
	cin>>str1;
	cin>>str2;
	
	sort(str1.begin(),str1.end());
	
	sort(str2.begin(),str2.end());
	
	for(int i=0;i<str1.length();i++)
	{
	if(str1[i]!=str2[i])
	{
		cout<<"not anrgam "<<endl;
	}
	}
	cout<<"anargam hai bhai :"<<endl;
}
	
	
	
