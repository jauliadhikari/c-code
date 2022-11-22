// 1,2,3,4,  1,2,2,3,3,4    4,3,3,4,1    
#include<bits/stdc++.h>
using namespace std;
bool ismo(vector<int> jauli)
{
	int first = jauli[0];
	int last = jauli[jauli.size()-1];
	
	
	if(first<last)
	{
		//cout<<"incresingly sorted :"<<endl;
	for(int i=0;i<jauli.size()-1;i++)
	{
		if(jauli[i]>jauli[i+1])
		{
			return false;
		}
	}
	}
	else if(first>last)
	{
		//cout<<"decreasingly sorted : "<<endl;
	for(int i=0;i<jauli.size()-1;i++)
	{
		if(jauli[i]<jauli[i+1])
		{
			return false;
		}
	}	
	}
	if(first==last)
	{
		//cout<<"sab equal : "<<endl;
	for(int i=0;i<jauli.size()-1;i++)
	{
		if(jauli[i]!=jauli[i+1])
		{
			return false;
		}
	}	
	}
	
	return true;
}
int main()
{
	vector<int> v;
	int t;
	
	for(int i=0;i<5;i++)
	{
		cin>>t;
		v.push_back(t);
	}
	
	if(ismo(v)==true)
	{
		cout<<"yes monotonic;";
		return 0;
	}
	
	cout<<"no";
	
}
