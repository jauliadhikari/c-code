#include<bits/stdc++.h>
using namespace std;
int main()
{
	int start=0;
	int size = 9;
	int end=size-1;
	int arr[9]={1,8,6,2,5,4,8,3,7};
	int r=0; 
	
	while(start<end)
	{
		r = max(r, min(arr[start],arr[end]) * (end-start));
		
		if(arr[start]<=arr[end])
		{
			start++;
		}
		else
		{
			end--;
		}
	}
	cout<<r;
}

