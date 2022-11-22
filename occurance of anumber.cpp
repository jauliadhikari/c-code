#include<iostream>
using namespace std;
int first(int arr[],int size,int key)
{
	int start=0;
	int ans;
	int end=size-1;
	int mid=(start+(end-start)/2);
	while(start<=end)
	{ 
	  if(arr[mid]==key)
	  { 
	    ans=mid;
	    end=mid-1;
	  }
	  else if(key>arr[mid])
	  {
	  	start=mid+1;
	  }
	  else if(key<arr[mid])
	  {
	  	end=mid-1;
	  }
	  mid=(start+(end-start)/2);
		
	} return ans;
	
}
int last(int arr[],int size,int key)
{
	int start=0;
	int ans;
	int end=size-1;
	int mid=(start+(end-start)/2);
	while(start<=end)
	{ 
	  if(arr[mid]==key)
	  { 
	    ans=mid;
	    start=mid+1;
	  }
	  else if(key>arr[mid])
	  {
	  	start=mid+1;
	  }
	  else if(key<arr[mid])
	  {
	  	end=mid-1;
	  }
	  mid=(start+(end-start)/2);
		
	} return ans;
}
int main()
{ 
	int arr[5]={2,3,3,3,9};
	int answer;
	int answer1;
	answer=first(arr,5,3);
	answer1=last(arr,5,3);
	cout<<" first occurance"<<answer<<"  "<<"last occurance"<<answer1<<endl;
}
