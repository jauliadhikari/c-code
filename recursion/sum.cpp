#include<iostream>
using namespace std;
int sum1(int arr[],int size)
{   static sum=0;
	if(size==1)
	{   
		return arr[0] ;
	}
    sum=sum+arr[0];
	
	sum1(arr+1,size-1);
	
	
	return sum;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int size=5;
	cout<<sum1(arr,size);
}
