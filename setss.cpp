#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	set <int,string> s;
	
	s.insert(1,'abc');
	
	s.insert(2,'abc');
	
	s.insert(3,'abc');
	
	s.insert(1,'abc');
	
	s.insert(9,'abc');
	
	
	set <int,string> :: iterator it=s.begin();
	for(it;it!=s.end();it++)
	{
		cout<<s.begin()<<endl;
		//first<<*it.second;
	}
	
	
	
	
}
