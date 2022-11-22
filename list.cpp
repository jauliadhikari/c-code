#include<bits/stdc++.h>
using namespace std;
void display(list <int> l)
{
	list <int> :: iterator it;
	
	for(it =l.begin();it !=l.end();it++)
	{
		cout<<" "<<*it;
	}
	cout<< " \n "<<endl;
}

int main()
{
	list<int> l1,l2;
	
	for(int i=0;i<=10;i++)
	{
		l1.push_back(i*2);
		
		l2.push_back(i*3);
	}
	
	display(l1);
	
	display(l2);
	

	
	l1.pop_front();
	l2.pop_front();
	
	display(l1);
	
	l1.reverse();
	
	display(l1);
	
    l1.merge(l2);
	
	display(l1);
	
	
}
