#include<iostream>
using namespace std;
int binary_search(int arr[],int size,int key)
{
	
	int start=0;
	int end=size-1;
	int mid=(start+end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
			break;
		}
		if(key<arr[mid])
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
		mid=start+end-start/2;
		}
	return -1;
}
int main()
{   int answer;
	int arr[5]={1,2,3,4,5};
	answer=binary_search(arr,5,2);
	cout<<answer<<endl;
	
}



