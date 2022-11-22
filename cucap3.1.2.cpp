#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	
	int n;
	
	cin>>n;
	
	cin>>str;
	
	for(int i =0;i<n-1;i++)
	{
		if(str[i]=='H' && str[i+1]=='H')
		{
			cout<<"NO";
			return 0;
		}
	}
	
	for(int i =0;i<n;i++)
	{
		if(str[i]=='.')
		{
			str[i]='B';
		}
	}
	cout<<"YES"<<endl;
	cout<<str;
}
