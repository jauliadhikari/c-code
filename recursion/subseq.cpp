#include<bits/stdc++.h>
using namespace std;
void solve(string str,string op,int index,vector<string> &ans)
{
	if(index>=str.size())
	{
		ans.push_back(op);
		return;
	}
	
	//excluding
	solve(str,op,index+1,ans);
	
	//including 
	char temp=str[index];
	op=op+temp;
	solve(str,op,index+1,ans);
	
}
void subseq(string str,string op,int index,vector<string> ans)
{
	
	solve(str,op,index,ans);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	
}
int main()
{
	string str;
	cin>>str;
	string op;
	int index=0;
	vector<string> ans;
	subseq(str,op,index,ans);
}
