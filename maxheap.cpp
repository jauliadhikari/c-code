#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue <int> maxi;
	
	maxi.push(1);
	maxi.push(11);
	maxi.push(13);
	maxi.push(190);
	maxi.push(111);
	maxi.push(108);
	maxi.push(140);
	
	
	
	cout<<"max heap"<<endl;
	int sizee=maxi.size();
	for(int i=0;i<sizee;i++)
	{
		cout<<maxi.top()<<endl;
		maxi.pop();
	}
	
	
	cout<<"min heap"<<endl;
	priority_queue <int,vector<int>,greater <int> > min;
	
	min.push(1);
	min.push(11);
	min.push(13);
	min.push(190);
	min.push(111);
	min.push(108);
	min.push(140);
	
	for(int i=0;i<sizee;i++)
	{
		cout<<min.top()<<endl;
		min.pop();
	}
	
}
