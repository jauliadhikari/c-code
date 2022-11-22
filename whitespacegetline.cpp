#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{   int count1=0,count2=0;
	string str;
	getline(cin,str);
	string re = str;
	int length1=str.length();
	for(int i=0;i<length1;i++)
	{
		if(str[i]==' ')
		{
			count1++;
		} 
	}
	cout<<"white space "<<count1<<endl;
	
	reverse(re.begin(),re.end());
	
	int length2=re.length();
	for(int i=0;i<length2;i++)
	{
		if(re[i]==' ')
		{
			count2++;
		} 
	}
	if(count1==count2)
	{
		cout<<"same whitespace"<<endl;
	}
	else
	cout<<"same nhi hain "<<endl;
	
}
