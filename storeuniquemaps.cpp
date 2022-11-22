#include<bits/stdc++.h>
using namespace std;
int main()
{   int size;
	map<char,int> m;   
	
	cin>>size;
	for(int i=0;i<size;i++)
	{  
	    string str;
		cin>>str;
		m[str[i]]++;
	}
    
	map<char,int> :: iterator it;
	
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
}
