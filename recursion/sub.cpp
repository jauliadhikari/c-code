#include<bits/stdc++.h>
using namespace std;
void subset(vector <int> v,vector <int> op,int i,vector<vector<int> > &ans)
{
	if(i>=v.size())
	{
		ans.push_back(op);
		return;
	}
	
	//excluding part
	subset(v,op,i+1,ans);
	
	//including part
	int temp=v[i];
	op.push_back(temp);
	subset(v,op,i+1,ans);
	
}
int main()
{
	vector<int> v;
	for(int i=0;i<3;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	int i=0;
	
	vector<int> op;
	
	vector <vector<int> > ans;
	
	subset(v,op,i,ans);
	
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j];
		}
		cout<<endl;
	}
	
	
}
