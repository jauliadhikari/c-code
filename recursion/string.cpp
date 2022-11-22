#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	string str1;
	int count=0,j=0,x;
	cin>>str;
	cin>>str1;
	int n = str1.length();
	for(int i=0;i<str.size();i++)
	{
       for(j=0;j<n;j++)
       {
       	
       	if(str[j+i]!=str1[j])
       	{
       		break;
		}
		
	   }
	   if(j==n)
		{
			count++;
		}
	   
    }
   cout<<count;
}
