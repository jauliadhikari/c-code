#include<bits/stdc++.h>
using namespace std;
void bub(int arr[],int size)
{
	if(size==1)
	{
		return ;
	}
	for(int j=0;j<size-1;j++)
	{
		if(arr[j]>arr[j+1])
		{
			swap(arr[j],arr[j+1]);
		}
	}
	
	bub(arr,size-1);
}

int main()
{
	int arr[5]={2,4,1,3,7};
	int size=5;
	bub(arr,size);
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
