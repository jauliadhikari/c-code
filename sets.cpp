#include<bits/stdc++.h>
using namespace std;
void print(set <string> &s)
{   	
	set <string> :: iterator it;
	for(it=s.begin();it!=s.end();it++)
	{
		cout<<(*it)<<endl;
	}
}
int main()
{
	set <string> s;
	
	s.insert("xcv");
	
	s.insert("jkl");
	
	s.insert("qwe");
	
	s.insert("avg");
	
	set <string> :: iterator it;
	
	it=s.find("asd");
	/*if(it!=s.end())
	{
		cout<<(*it)<<endl;
	}*/
	
	s.erase("qwe");

	print(s);
	
	
}
