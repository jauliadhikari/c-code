// kadane's algorithm
//arr[9]={-2,1,-3,4,-1,2,1,-5,4}
#include<iostream>
using namespace std;
int kdane(int arr[],int size)
{
	int maxsum =0;
	int currsum = 0;
	for(int i =0;i<size;i++)
	{
		currsum = currsum + arr[i];       //arr[9]={-2,1,-3,4,-1,2,1,-5,4}
		if(currsum>maxsum)
		{
			maxsum = currsum;
		}
		if(currsum < 0)
		{
			currsum = 0;
		}
	}
	return maxsum;
}
int main()
{
	int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
	
	cout<<kdane(arr,9)<<endl;
}
