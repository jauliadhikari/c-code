#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	map<int,string> m;
	
	m[111]="jauli";
	
	m[21]="jauli";
	
	m[4]="jauli";
	
	m[100]="jauli";
	
	m[10]="jauli";
	
	m[11]="jauli";
	
	map<int,string> :: iterator it;
	
	cout<<"size"<<m.size()<<endl;;
	
	
	
	for(it=m.begin();it!=m.end();it++)
	{
		cout<< (*it).first<<" "<<(*it).second <<endl;
	}
	
	m.erase(111);
	
	for(it=m.begin();it!=m.end();it++)
	{
		cout<< (*it).first<<" "<<(*it).second <<endl;
	}
	
	
}
