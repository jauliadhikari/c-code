#include<iostream>
using namespace std;
int sum(int arr[],int size)
{   int sum1=0;
	if(size==0)
    {
    	return 0;
	}
	if(size==1)
	{
		return arr[0];
	}
	else
	{
		int rm = sum(arr+1,size-1);
		sum1 = arr[0]+rm;
		return sum1;
	}
}
int main()
{
	int arr[5]={1,2,3,4,5};
	cout<<sum(arr,5)<<endl;
}
