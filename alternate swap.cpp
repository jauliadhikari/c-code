#include<bits/stdc++.h>
using namespace std;
void interchange(int arr[],int size)
{
	for(int i=0;i<6;i++)
	{
		swap(arr[i],arr[i+1]);
		i=i+1;
	}
}
int main()
{
	int arr[6]={1,2,3,4,5,6};
	interchange(arr,6);
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
}
