#include<iostream>
#include<vector>

using namespace std;

void rev(vector<int> &arr)
{
	int size=arr.size();
	int s=0,e=size-1;                      
	while(s<=e)                      
	{
		swap(arr[s++],arr[e--]);
	}
}
void print(vector<int> arr)
{
	for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	vector<int> arr;
	int d;
	for(int i=0;i<5;i++)
	{
		cin>>d;
		arr.push_back(d);
	}
	rev(arr);
	print(arr);
	
}
