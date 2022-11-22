#include<bits/stdc++.h>
using namespace std;
void solve(vector <int> v,vector<int> &ans)
{
    int temp=0;
   
    for(int i=0;i<v.size();i++)
    {   
	    int count=0;
		temp=v[i];
     	for(int j=i+1;j<v.size();j++)
     	{
     		if(v[j]<temp)
     		{
     			count++;
			}
		}
		ans.push_back(count);
    }
}
int main()
{
	vector <int> v;
	for(int i=0;i<4;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	vector <int> ans;
	
	solve(v,ans);
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
	}
} 
