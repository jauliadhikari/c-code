#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> v,vector<int> op,int i,vector<vector<int> > &ans)
{
	
	if(i>=v.size())
	{
		ans.push_back(op);
		return;
	}
	
	//exclude
	solve(v,op,i+1,ans);
	
	//incklude
	int temp = v[i];
	op.push_back(temp);
	solve(v,op,i+1,ans);
	
}

void subset(vector<int> v)
{

	
}
int main()
{
	vector<int> v;
	

	int t;
	for(int i=0;i<3;i++)
	{
		cin>>t;
		v.push_back(t);
	}
		
	vector<int> op;
	
	vector<vector<int> > ans;
	int index = 0;
	solve(v,op,index,ans);
	
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
