#include<bits/stdc++.h>
using namespace std;
int main()
{
	//int arr[7]={0,0,1,1,2,3,3};
	vector <int> v;
	for(int i=0;i<7;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	for(int i=0;i<v.size()-1;i++)
	{
		if(v[i]==v[i+1])
		{
			v.erase(v.begin()+i);
			i--;
		}
	}
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
}
