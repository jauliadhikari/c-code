#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	string str1;
	cin>>str;
	cin>>str1;
	int count=0,i,j;
	
	
	for(i=0;i<str.size();i++)
	{
		for( j=0;j<str1.size();j++)
		{
			if(str[i+j]!=str[j])
			{
			    break;
			}
			
		}
		if(j==str1.size())
		{
			count++;
		}
		
	}
	
	cout<<count<<endl;
}
