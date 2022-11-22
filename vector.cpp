#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> v;
	cout<<"enter value"<<endl;
	v.push_back(23);
	v.push_back(32);
	v.push_back(45);
	v.push_back(59);
	v.push_back(21);
	
	cout<<"pop values"<<endl;
	for(int i=0;i<v.size();i++)
	{     
	   cout<<v[i]<<endl;
	}
	v.pop_back();
	v.pop_back();
	v.pop_back();
	for(int i=0;i<v.size();i++)
	{     
	   cout<<v[i]<<endl;
	}
	v.clear();
	for(int i=0;i<v.size();i++)
	{     
	   cout<<v[i]<<endl;
	}
}

