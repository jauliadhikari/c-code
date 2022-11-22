#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> v;
	for(int i=0;i<8;i++)
	{
	    int x;
	    cin>>x;
	    v.push_back(x);
	}
	
	vector <int> :: iterator it =v.begin();
	
	for(int i=0;i<v.size();i++)
	{
		cout<<(*it++)<<endl;
	}
}
