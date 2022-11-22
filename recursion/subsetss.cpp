#include<bits/stdc++.h>
using namespace std;
void solve(vector <int> v,vector <int> op,int i ,vector<vector<int> > &ans)
{
	if(i>=v.size())
	{
		ans.push_back(op);
		return ;
	}
	
	solve(v,op,i+1,ans);
	
	
	int temp=v[i];
	op.push_back(temp);
	solve(v,op,i+1,ans);
}
void subset(vector <int> v,vector <int> op,int i ,vector<vector<int> > ans)
{
	solve(v,op,i,ans);
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
			
		}
		cout<<endl;
	}
}
int main()
{
	vector<int> v;
	for(int i=0;i<5;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	vector<int> op;
	
	vector<vector<int> > ans;
	
	int i=0;
	
	subset(v,op,i,ans);
	
}
