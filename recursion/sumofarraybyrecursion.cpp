#include<iostream>
using namespace std;
int total(int arr[],int size)
{   
    static int sum=0;
	if(size==0)
	{
		return 0;
	}
	sum=sum+arr[0];
	
    total(arr+1,size-1);
	
	return sum;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int size=5;
	cout<<total(arr,size);
	
}
