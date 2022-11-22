#include<iostream>
using namespace std;
int binary(int arr[],int size,int key)
{   int start=0;
    int end=size-1;
    int mid=start+end-start/2;
    while(start<=end)
    { 
	   if(arr[mid]==key)
       {
    	return mid;
	   }
	   else if(key <arr[mid])
	   {
	   	start=mid+1;
	   }
	   else if(key>arr[mid])
	   {
	   	end=mid-1;
	   }
	   mid=start+end-start/2;
	}
	   return -1;
}

int main()
{   int result;           
	int arr[5]={50,40,30,20,10};
	result=binary(arr,5,30);
	cout<<result<<endl;
}
