#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> v;
	int key;
	for(int i=0;i<5;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	cout<<"enter key"<<endl;
	cin>>key;
	
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==key)
		{
			v.erase(v.begin()+i);
		}
	}
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	

}
