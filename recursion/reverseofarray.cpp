#include<bits/stdc++.h>
using namespace std;
void rev(vector <int> &v,int s,int e)
{
	if(s>e)
	{
		return;
	}
	swap(v[s++],v[e--]);
	
   	rev(v,s,e);
}
void print(vector <int> v,int sizee)
{
	for(int i=0;i<sizee;i++)
	{
		cout<<v[i]<<endl;
	}
}
int main()
{
	vector <int> v;
	int num;
	cout<<"enter number of time you want loop"<<endl;
	cin>>num;
	
	for(int i=0;i<num;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	int sizee= v.size();
	rev(v,0,sizee-1);
	print(v,sizee);
	
	
}
