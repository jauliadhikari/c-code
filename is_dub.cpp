#include<bits/stdc++.h>
using namespace std;
bool is_dub(int arr[],int size)
{   
	sort(arr,arr+size);
	
	for(int i=1;i<size;i++)
	{
		if(arr[i-1]==arr[i])
		{
			return true;
		}
	}
	return false;
	
}
int main()
{
	int arr[5]={1,2,3,4,1};
	
	cout<<is_dub(arr,5);
	
	
}

