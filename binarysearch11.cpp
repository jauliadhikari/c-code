#include<iostream>
using namespace std;
int Binary(int arr[],int size,int key)
{   
    int s=0;
    int e=size-1;
	int mid=s+(e-s)/2;
	while(s<=e)
	{
	if(arr[mid]==key)
	{
		return mid;
	}
	else if(arr[mid]<key)
	{
		s=mid+1;
	}
	else
	{
		e=mid;
	}
	mid=s+(e-s)/2;
    }
}
int main()
{
  int arr[7]={1,3,4,6,8,9,10};
  int x=Binary(arr,7,4);
  cout<<x<<endl;	
}
