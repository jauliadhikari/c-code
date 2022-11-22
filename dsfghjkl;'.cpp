#include<bits\stdc++.h>
using namespace std;
int main()
{
	stack <int> s1,s2;
	int size,x;
	
	cout<<"enter size of stack"<<endl;
	cin>>size;
	
	for(int i=0;i<size;i++)
	{
		cin>>x;
		s1.push(x);
	}
	
	for(int i=0;i<size;i++)
	{
		s2.push(s1.top());
		s1.pop();
	}
	
	
	cout<<"poping out values"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<s2.top()<<endl;
		s2.pop();
	}
	s2.pop();
}
