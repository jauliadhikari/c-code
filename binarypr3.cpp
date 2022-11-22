#include<iostream>
using namespace std;
int binary(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=start+end-start/2;                 
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			end=mid-1;
		}
		else if(arr[mid]<key)
		{
			start=mid+1;
		}
		mid=start+end-start/2;
	} return -1;
	
}

int main()
{   int arr[5],key;
    for(int i=0;i<5;i++)
    {
    	cin>>arr[i];
	}
	cout<<"enter key "<<endl;
	cin>>key;
	cout<<"index is  "<<binary(arr,5,key)<<endl;
    
  

}
