// is sorted bool true false //base codition recursive   arr[0] = yes arr[1] = yes
#include<iostream>
using namespace std;
bool issorted(int arr[],int size)
{														//[1,2,3,4,5]  = arr || arr+1 = 2,3,4,5;
	if(size == 0 || size == 1)
	{
		return true;
	}
	if(arr[0]>arr[1])
	{
		return false;
	}
	else
	{
		bool rm = issorted(arr+1,size-1);
		
		return rm;
	}
	
	
}
int main()
{
	int arr[5]={1,2,3,4,5};
	
	if(issorted(arr,5)==1)
	cout<<"sorted : "<<endl;
	else
	cout<<"not sorted : "<<endl;
}
