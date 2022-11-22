#include<bits/stdc++.h>
using namespace std;
void subsets(vector <int> v,vector <int> op,int i,vector<vector <int> > &result)
{
	
	if(i>=v.size())
	{
		result.push_back(op);
		return;
	}
	
	//excluding
	subsets(v,op,i+1,result);	
	
	//including
	int temp=v[i];
	op.push_back(temp);
	subsets(v,op,i+1,result);

	
}
int main()
{
	vector <int> v;
	int x;
	for(int i=0;i<3;i++)
	{
        cin>>x;
		v.push_back(x);
	}
	 
	vector <int> op;
	vector<vector<int> > result;
	int i=0;
    subsets(v,op,i,result);
	
	for(int i=0;i<result.size();i++)
	{
		for(int j=0;j<result[i].size();j++)
		{
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
