// arr[] = {1,2,3,4,5} // {5,4,3,2,1}
#include<iostream>
using namespace std;
int main()
{   int arr[5]={1,2,3,4,5};
    int start=0;
    int end=4;
	while(start<=end)
	{
		swap(arr[start++],arr[end--]);
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	
}
