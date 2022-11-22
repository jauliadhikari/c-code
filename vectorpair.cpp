#include<bits/stdc++.h>
using namespace std;
void vec(vector<pair<int,int> > &v)
{
	int n=5,x=0,y=0;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		v.push_back({x,y});
	}
}
void print(vector<pair<int,int> > &v)
{   int n=5;
    for(int i=0;i<n;i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
}
int main()
{
	vector<pair<int,int> >v;
	vec(v);
	print(v);
}
