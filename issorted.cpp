// issorted array with the help of recursion 
// getsem      [1,2,3,4,5]
#include<iostream>
using namespace std;
bool issorted(int arr[],int size)
{
	if(size == 0 || size == 1)
	{
		return true;
	}
	if(arr[0]>arr[1])
	{
		return false;
	}
	
	bool ans = issorted(arr+1,size-1);
	return ans;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	if(issorted(arr,5)==1)
	cout<<"sorted :"<<endl;
	else
	cout<<"not sorted : "<<endl;
}
