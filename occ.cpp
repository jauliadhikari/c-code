#include<bits/stdc++.h>
using namespace std;
int f_occ(vector<int> v,int key)
{
	int s=0;
	int e=v.size()-1;
	int mid=s+(e-s)/2,ans=-1;
	while(s<=e)
	{
		if(v[mid]==key)
		{
			ans=mid;
			e=mid-1;
		}
		else if(v[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
int l_occ(vector<int> v,int key)
{
	int s=0;
	int e=v.size()-1;
	int mid=s+(e-s)/2,ans=-1;
	while(s<=e)
	{
		if(v[mid]==key)
		{
			ans=mid;
			s=mid+1;
		}
		else if(v[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}

int main()
{
	vector<int> v;
	int x;
	for(int i=0;i<v.size();i++)
	{
	    cin>>x;
		v.push_back(x);
	}
	
    cout<<"enter key"<<endl;
    
    int key;
    cin>>key;
    cout<<f_occ(v,key);
    cout<<l_occ(v,key);
}
