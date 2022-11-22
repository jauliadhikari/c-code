#include<bits/stdc++.h>
using namespace std;
bool is_pal(vector <int> v,int s,int e)
{
	if(s>e)
	{
		return true;
	}
	
	if(v[s]!=v[e])
	{
		return false;
	}
	s++;
	e--;
	is_pal(v,s,e);
	
}
int main()
{
	vector <int> v;
	for(int i=0;i<3;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	int size=v.size();
	
	if(is_pal(v,0,size-1)==true)
	{
		cout<<"pal"<<endl;
	}
	else
	{
		cout<<"not"<<endl;
	}
	
}
