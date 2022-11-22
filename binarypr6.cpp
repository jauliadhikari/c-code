#include<iostream>
using namespace std;
int binary(int arr[],int size,int key)
{   int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=size)
    {
    	if(arr[mid]==key)
    	{
    		return mid;
		}
		else if(key<arr[mid])
		{
			end=mid-1;
		}
		else if(key>arr[mid])
		{
			start=mid+1;
		}
		mid=start+(end-start)/2;
	} return -1;
	
}

int main()
{   int size;
    cin>>size;
    int* arr=new int[size];
    for(int i=0;i<size;i++)
    {
    	cin>>arr[i];
	}
	int key;
	cout<<"enter key "<<endl;
	cin>>key;
    int result=binary(arr,size,key);
    cout<<"index of number"<<result<<endl;
	
}

