#include<iostream>
using namespace std;
int re(int arr[],int size)
{
	if(s>e)
	{
		return ;
	}
	else
	{
		return re(arr,5);
	}
}
int main()
{
	int arr[5]={1,2,3,4,5};
	cout<<re(arr,5);
}
