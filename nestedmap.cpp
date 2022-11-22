#include<bits/stdc++.h>
using namespace std;
int main()
{
	map< pair <string,string>,vector <int> > m;
	int size;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		string fs,ls;
		int num;
		cin>>fs>>ls>>num;
		for(int j=0;j<num;j++)
		{
			int x;
			cin>>x;
			m[{fs,ls}].push_back(x);
			
		}
	map< pair <string,string>,vector <int> > :: iterator it = m.begin();
	
	//map< pair <string,string>,vector <int> > m	:: iterator t = m.second();
	
	
	for(int i=0;i<size;i++)
	{
		cout<<it.first<< " "<<it.second<<endl;
	}
		
	}
}
