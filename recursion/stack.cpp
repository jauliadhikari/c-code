#include<bits/stdc++.h>
using namespace std;
void output(stack s,int size)
{
	if(size<0)
	{
		return 0;
	}
	
	cout<<s.pop(top--);
	output(s+1,size-1);
}

int main()
{
	stack s;
	int x,size=5;
	for(int i=0;i<size;i++)
	{   cin>>x;
		s.push(top++)=x;
	}
	output(s,size);
}
