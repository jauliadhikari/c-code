#include<bits/stdc++.h>
using namespace std;
int linear(vector <int> v,int key,int s)
{  
   
    int e=v.size()-1;
	if(s>e)
	{
		return 0 ;
	}
	int r=(v,5,s++);
	return r;
	
}
int main()
{
	vector <int> v;
	for(int i=0;i<5;i++)
	{   
	    int x;
	    cin>>x;
		v.push_back(x);
	}
	int s=0;
	cout<<linear(v,5,s);
	
}
