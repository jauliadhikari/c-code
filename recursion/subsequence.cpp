#include<bits/stdc++.h>
using namespace std;
void solve(string str,string op,int i,vector <string> &ans)
{
	if(i>=str.size())
	{
		ans.push_back(op);
		return;
	}
	//excluding part
	solve(str,op,i+1,ans);
	
	//including part
	char temp=str[i];
	op=op+temp;
	solve(str,op,i+1,ans);
}

int main()
{
	string str;
	cin>>str;
	
	string op;
	
	vector <string> ans;
	
	int i=0;
	
	solve(str,op,i,ans);
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
	}
	
}
