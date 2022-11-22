#include<bits/stdc++.h>
using namespace std;
void input(vector<int> &v)
{
	int x,i=0;
	while(i<5)
	{ 
		cin>>x;
		v.push_back(x);
		i++;
	}
	
}
void sortt( vector <int> &v,int size)
{
	sort(v.begin(),v.end());
}

void print(vector<int> vc)
{
	
}


int main()
{
	vector <int> v;
	
	input(v);
	
	sortt(v,5);
	
	//print(v);
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	
} 
