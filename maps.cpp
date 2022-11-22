#include<bits/stdc++.h>
using namespace std;
int main()
{
	map <int,string> m;
	m [10]="jauli";
	m [2]="ankit";
	m [0]="jai";
	m [1]="kk";
	
//	map <int,string> :: iterator it;
	
//	for(it=m.begin();it!=m.end();it++)
//	{
	//	cout<<(*it).first<<" "<<(*it).second<<endl;
//	}
	
	/*for(auto &pr : m)
	{
		cout<<pr.first<<" "<<pr.second;
	}*/
	
    map <int,string> :: iterator it = m.find(7);
	cout<<(*it).first<<" "<<(*it).second<<endl;
	
	if(it==m.end())
	{
		cout<<"no value"<<endl;
	}
	else
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
}
