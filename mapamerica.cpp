#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[10]={1,2,4,7,8,4,7,9,12,90};
	
	map<int,int> m;
	
	
	for(int i=0;i<10;i++)
	{
		m[arr[i]]++;
	}
	
	for(auto i: m)
	{
		if(i.second>1)
		{
			cout<<i.first;
		}
	}
}
