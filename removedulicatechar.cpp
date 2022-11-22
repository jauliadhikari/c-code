#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	string str1;
	cin>>str;
   /*for(int i=0;i<str.size();i++)
	{
		
		if(str[i]==str[i+1])                     unoptimize
		{
			str1.push_back(str[i+1]);
		}
	
	}
	cout<<str1<<endl;*/
	
	//optimize
	
	
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==str[i+1])
		{
			str[i+1]=' ';
		}
	}
	
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	cout<<str<<endl;
	
}

