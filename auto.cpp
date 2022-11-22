#include<bits/stdc++.h>
using namespace std;
void bub(vector<int> &v)
{
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v.size()-1;j++)
		{
			if(v[j+1]<v[j])
			{
				swap(v[j+1],v[j]);
			}
		}
	}
}
void print(vector<int> v)
{
	for(auto i:v)
	{
		cout<<i<<" ";
	}
}
int main()
{
	vector<vector<int> > v{{1,9,2,5},{12,31,45,9},{321,56,43,50}};
	
	for(auto i:v)
	{
			bub(i);
			print(i);
			cout<<endl;
	}
}
