#include<bits/stdc++.h>
using namespace std;
bool is_pr(vector <int> v,int k)
{
	for(int i=0;i<v.size();i++)
	{
	if(v[i]==k)
	{
		return true;
	}}
	return false;
}
int dub(vector<int> v)
{
	int t;
	for(int i=0;i<v.size();i++)
	{
		t = v[i];
		for(int j=i+1;j<v.size();j++)
		{
			if(v[j]==t)
			{
				//
				return t;
			}
		}
	}
}
int main()
{
	string str;
	cin>>str;
	vector <int> v;
	int count=1,j=0;
	
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==str[i+1])
		{
			count++;
			
		}
		else
		{
			v.push_back(count);
			count=1;
		}
		
	}

    int r=0;
    
    int du = dub(v);
    
    while(is_pr(v,du)==true)
    {
    	du = du-1;
    	r++;
	}

cout<<r<<endl;


}


