#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s1,s2;
	
	int n;
	
	cout<<"Enter the numbers of integer you want to enter  :"<<endl;
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		s1.push(x);
	}
	for(int i=0;i<n;i++)
	{
		s2.push(s1.top());
		s1.pop();
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<s2.top()<<endl;
		s2.pop();
	}
	
	
	
}
