#include<iostream>
#include<vector>

using namespace std;
void bub(vector<int> &arr)
{	
	int size = arr.size();
	for(int i=0;i<size;i++) 
	{
		for(int j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}  
	
}
void print(vector<int> arr)
{
	for(int i =0;i<arr.size();i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	
	int size,d;
	vector<int> arr;
	cout<<"enter num how many time you want to push a value"<<endl;
	cin>>size;
	
	for(int i=0;i<size;i++)
	{
		cin>>d;
		arr.push_back(d);
	}
	bub(arr);
	
	print(arr);
	
}
