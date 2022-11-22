#include<iostream>
#include<vector>
using namespace std;
void Merge(vector <int> &arr,int s,int e)
{
	int mid=s+(e-s)/2;
	
	int s1=mid-s+1;
	int s2=e-mid;
	
   int* arr1=new int[s1];
	
   int* arr2=new int[s2];
	
	int k=s;
	
	for(int i=0;i<s1;i++)
	{
		arr1[i]=arr[k++];
	}
	
	for(int j=0;j<s2;j++)
	{
		arr2[j]=arr[k++];
	}
	
	int i=0,j=0;
	k=s;
	while(i<s1 && j<s2)
	{
		if(arr1[i]<arr2[j])
		{
		   arr[k++]=arr1[i++];
	    }
		else
		{
			arr[k++]=arr2[j++];
		}
	}
	while(i<s1)
	{
			arr[k++]=arr1[i++];
	}
	while(j<s2)
	{
			arr[k++]=arr2[j++];
	}
}
void Mergesort(vector <int> &arr,int s,int e)
{
	if(s>=e)
	{
		return ;
	}
	int mid=s+(e-s)/2;
	Mergesort(arr,s,mid);
	
	Mergesort(arr,mid+1,e);
	
	Merge(arr,s,e);
}

void print(vector <int> arr,int size)
{
	for(int i =0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	vector <int> arr;
	int d;
	for(int i=0;i<5;i++)
	{
		cin>>d;
		arr.push_back(d);
	}
	int n=5;
	Mergesort(arr,0,n-1);
	print(arr,n);
}

