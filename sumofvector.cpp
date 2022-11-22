#include<iostream>
#include<vector>

using namespace std;
int sum(vector<int> arr)
{
	int  size=arr.size();
	int s=0;
	for(int i=0;i<size;i++)
	{
		s=s+arr[i];
	}
	return s;
}
int main()
{
	vector<int> arr;
	int d;
	cout<<"enter values"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>d;
		arr.push_back(d);
	}
	cout<<sum(arr)<<endl;
}
