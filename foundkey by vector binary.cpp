#include<bits/stdc++.h>
using namespace std;
int bsa(vector<int> v,int key)
{   
    int s=0;
    int e=v.size()-1;
	int mid=s+(e-s)/2;
	
	while(s<=e)
	{
		if(v[mid]==key)
		{
			return mid;
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
	return -1;
}
int bsd(vector<int> v ,int key)
{
	
    int s=0;
    int e=v.size()-1;
	int mid=s+(e-s)/2;
	
	while(s<=e)
	{
		if(v[mid]==key)
		{
			return mid;
		}
		else if(v[mid]<key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return -1;
}
int main()
{
	vector <int> v;
	int k;
	
	for(int i=0;i<5;i++)
	{
		cin>>k;
		v.push_back(k);
	}
	
	int key;
	cout<<"Eneter the key sir : "<<endl;
	cin>>key;
	
	
	if(v[0]<v[v.size()-1])
	{
		cout<<" Serached element is at : "<<bsa(v,key)<<" index "<<endl;
	}
	
	else
	{
		cout<<" Serached element is at : "<<bsd(v,key)<<" index "<<endl;
	}
	
}
