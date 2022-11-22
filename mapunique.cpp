#include<bits/stdc++.h>
using namespace std;
int main()
{    //order of o(n) time complexity
	string str="anshika";
	reverse(str.begin(),str.end());
	unordered_map<char,int> umap;
	for(int i=0;i<str.size();i++)
	{
		umap[str[i]]++;
	}
	for(auto i: umap)
	{
		if(i.second==1)
		{
			cout<<i.first<<" ";
			return 0;
		}
	}
}
