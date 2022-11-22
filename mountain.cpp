#include<bits\stdc++.h>
using namespace std;
int is_max(int arr[],int size)
{
	int s=0;
	int e=size-1;
	int mid=s+(e-s)/2;
	
	while(s<e)
	{
		if(arr[mid]>=arr[mid+1])
		{
			e=mid;
		}
		else
		{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return mid;
}
int main()
{
	int arr[6]={0,5,10,22,2,1};
	int size=6;
	cout<<is_max(arr,size)<<endl;
}
