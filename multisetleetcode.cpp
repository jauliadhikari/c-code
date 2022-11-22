#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long size;
	int time;
	cin>>size>>time;
	multiset <long long> bags;
	
	for(int i=0;i<size;i++)
	{   
	    long long candy_count;
	    cin>>candy_count;
		bags.insert(candy_count);
	}
	

	long long total_candy=0,candy_count=0;
	for(int i=0;i<time;i++)
	{
		multiset <long long> :: iterator it = --bags.end();
		candy_count = *it;
		
		total_candy += candy_count;
		
		bags.erase(*it);
		
		bags.insert(candy_count/2);
	}
	cout<<total_candy<<endl;
}
