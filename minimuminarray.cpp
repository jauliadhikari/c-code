#include<iostream>
using namespace std;
int mini(int arr[],int size)
{
	int small=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
		}
	}
	return small;
}
int main()
{
	int arr[5]={2,7,1,0,3};
	cout<<mini(arr,5);
}
