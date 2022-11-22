#include<iostream>
using namespace std;
int maxi(int arr[],int size)
{
	if(size==1)
	{
		return arr[0];
	}
	int temp=arr[0],max=0;
	
	
	
	if(temp>arr[i])
	{
		max=temp;
	}
	
	
    return	maxi(arr+1,size-1);
	

}
int main()
{
	int arr[5]={1,2,10,4,5};
	int size=5;
	
    cout<<maxi(arr,5);
	
}
