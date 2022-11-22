#include<iostream>
using namespace std;
int binary(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=(start+end)/2;
	while(start<=end)
	{ 
	 if(key==arr[mid])
	 {
	 	return mid;
	 	
	 }
	 if(key>arr[mid])
		{
			start=mid+1;
		}
	else
	 	{
	 		end=mid-1;
		}
	
	mid=start+end/2;
	}
	
return -1;
} 
	
	

int main()
{   int i;
	int arr[5]={1,2,3,4,5};
	int result = binary(arr,5,3);
	cout<<result<<endl;
}

