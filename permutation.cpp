#include<bits/stdc++.h>
using namespace std;
void solve(vector <int> v,int index,vector< vector <int> > &ans)
{
	if(index>=v.size())
	{
		ans.push_back(v);
		return ;
	}
	
    for(int i=index;i<v.size();i++)
    {
    	swap(v[i],v[index]);
    	
    	solve(v,index+1,ans);
    	
    	//backtrack
    	swap(v[i],v[index]);
	}
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
	
	int index=0;
	vector< vector <int> > ans;
	solve(v,index,ans);
	
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans.size();j++)
		{
			//for(int k=0;k<ans.size();k++)
			//{
					cout<<ans[i][j]<<endl;
			//}
		}
	
	}
	
}
