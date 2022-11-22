#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5};
	int arr1[3];
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			cin>>arr1[i];
		}
	}
	for(int i=0;i<3;i++)
	{
		cout<<arr1[i]<<endl;
	}
	
	
}
