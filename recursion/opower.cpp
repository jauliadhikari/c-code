#include<bits/stdc++.h>
using namespace std;
int pow(int n)
{
	if(n==0)
	{
		return 1;
	}
	
	int r = 2 * pow(n-1);
	
	return r; 
	
	
}

int main()
{
	int n;
	cin>>n;
	
	cout<<pow(n);
}
