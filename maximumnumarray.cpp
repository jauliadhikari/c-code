#include<iostream>
using namespace std;
int maxi(int arr[],int size)
{   int large=0;
    large=arr[0];
    for(int i=0;i<size;i++)
    {
	   if(arr[i]>large)
	  	{
	  		large=arr[i];
		}
	}
    return large;
}
int main()
{
	int arr[5]={23,45,12,1,7};
	int size=5;
	cout<<maxi(arr,size)<<endl;
}
