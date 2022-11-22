#include<bits/stdc++.h>
using namespace std;
void solve(vector <int> v,vector <int> v1)
{
	for(int i=0;i<v.size();i++)
	{
		if(v[i]!=v1[i])
		{
			cout<<v[i]<<"dublicate"<<endl;
			cout<<v1[i]<<"missing"<<endl;
		}
	}
	  
}
int main()
{
	vector <int> v;
	vector <int> v1;
	for(int i=0;i<5;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	
	
	int x=1;
	for(int i=0;i<v.size();i++)
	{
		v1.push_back(x);
		x++;
	}
	
	solve(v,v1);
}
