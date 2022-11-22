#include<bits/stdc++.h>
using namespace std;
int main()
{
	//DECLARATION OF ARRAY
	pair<int,string> p;
	p={2,"jauli"};
	cout<<p.first<<" "<<p.second<<endl;
	
	
	//ARRAY PART
	pair<int,string> p_array[3];
	cout<<"enter pair"<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>p_array[i].first;
		
		cin>>p_array[i].second;
		
	}
	cout<<" output"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<p_array[i].first<<"  "<<p_array[i].second<<endl;
	}
	
	//REFERENCE PART
	pair<int,string> &p1=p;
	p1.first=6;
	p1.second="jyoti";
	cout<<p.first<<" "<<p.second<<endl;
	
	
}
