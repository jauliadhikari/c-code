#include<bits/stdc++.h>
using namespace std;
int main()
{
	list <int> l;
	l.push_back(1);
	l.push_back(5);
	l.push_back(10);
	l.push_back(2);
	
	l.push_front(120);
	l.push_front(110);
	l.push_front(160);
	l.push_front(190);
	
	l.erase(l.begin());
	l.pop_front();
	l.pop_front();
	
	list <int> :: iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
    	cout<<(*it)<<endl;
	}
	
}
