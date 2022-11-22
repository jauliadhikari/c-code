#include<bits/stdc++.h>
using namespace std;


int main()
{
	vector <int> v;
	int size;
	cin>>size;
	for(int i=1;i<=size;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	int erasee;
	cout<<"position of element which u want to erase"<<endl;
	cin>>erasee;
	
	v.erase(v.begin()+erasee);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	
	cout<<"range to del"<<endl;
	int r1,r2;
	
	cin>>r1>>r2;
	
	v.erase(v.begin()+r1,v.begin()+r2);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	
	
	
}
