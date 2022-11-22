#include<iostream>
using namespace std;
int firstocc(int arr[],int size,int num)
{   int ans=0;
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==num)
		{  
		   ans=mid;
		   end=mid-1;
		}
		else if(arr[mid]<num)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
		
	}return ans;
	
}

int lastocc(int arr[],int size,int num)
{   int ans=0;
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==num)
		{  
		   ans=mid;
		   start=mid+1;
		}
		else if(arr[mid]<num)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
		
	}return ans;
	
}
int main()
{   int size;                            
	cout<<"enter size"<<endl;
	cin>>size;
	int* arr =new int[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter num "<<endl;
	int num;
	cin>>num;
	int x=firstocc(arr,size,num);
	int y=lastocc(arr,size,num);
	cout<<"fist occ"<<x<<" "<<"last occ"<<y<<endl;
	cout<<"number of occurence"<<y-x+1<<endl;
}







