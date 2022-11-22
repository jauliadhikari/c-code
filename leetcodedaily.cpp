#include<bits/stdc++.h>
#define max 100
using namespace std;
int main()
{
	string str;
	int count = 1;
	vector<int> v;
	
	cin>>str;
	
	sort(str.begin(),str.end());
	
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==str[i+1])
		{
			count++;
		}
		else
		{
			v.push_back(count);
			count = 1;
		}
	}
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	
	
	
}
