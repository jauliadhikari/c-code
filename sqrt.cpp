#include<bits/stdc++.h>
using namespace std;
int sqrt(int x,int i)
{
	if(i==x/2)
	{
		return i;
	}
	
	if(i*i==x)
	{
		return i;
	}
	
	i++;
	sqrt(x,i);
	
}
int main()
{
	int x,i=1;
	cin>>x;
	cout<<sqrt(x,i);
}
