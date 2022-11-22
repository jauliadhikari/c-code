#include<bits/stdc++.h>
using namespace std;
int rot(vector <int> v,int size)
{
	int s=0;
	int e=v.size()-1;
	int mid=s+(e-s)/2;
	
	while(s<=e)
	{
		if(v[mid-1]<v[mid] && v[mid+1]<v[mid])
		{
			return mid+1;
		}
		if(v[mid]>=v[mid+1])
		{
			s=mid;
		}
		if(v[mid]<=v[mid-1])
		{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	return -1;
}
int main()
{
	vector <int> v;
	int x;
	for(int i=0;i<8;i++)
    {
    	cin>>x;
    	v.push_back(x);
	}
	int sizee=v.size();
	cout<<rot(v,sizee);
	
}
