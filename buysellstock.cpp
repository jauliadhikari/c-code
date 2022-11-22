//  [7,1,2,3,4,5,3] = 7 
#include<iostream>
using namespace std;
int main()
{
	int arr[7]={7,1,2,3,4,5,3};  
	int min=arr[0];
	
	int mini;
	for(int i=1;i<7;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
			mini = i;
		}
	}
	int maxaf = arr[mini];
	for(int i=mini;i<7;i++)
	{
		if(arr[i]>maxaf)
		{
			maxaf=arr[i];
		}
	}
	
	int r = maxaf-min;
	cout<<r;
	
}
