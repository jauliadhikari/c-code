#include<bits/stdc++.h>
using namespace std;
bool bs(vector <vector <int> > v,int key)
{
	int s=0;
	int e=v.size()-1;
	int mid=s+(e-s)/2;
	while(s<=e)
	{
	if(v[mid]==key)
	{
		return true;
	}
    if(v[mid]>key)
    {
    	e=mid-1;
	}
	if(v[mid]<key)
	{
		s=mid+1;
	}
	mid=s+(e-s)/2;}
	return false;
}
void solve(<vector <vector <int> > v,int key)
{
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout<<bs(v,key);
		}
	}
}
int main()
{
	vector <int> v={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
	int key;
	
	cout<<"enter key element"<<endl;
	cin>>key;
	solve(v,key);
	
	/*if(bs(v,key)==true)
	{
		cout<<"key present"<<endl;
	}
	else
	{
		cout<<"not present"<<Endl;
	}*/
}
