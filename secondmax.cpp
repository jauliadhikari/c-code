#include<bits/stdc++.h>
using namespace std;
int second(int arr[],int size)
{	
    int max = INT_MIN;
    int smax=INT_MIN;
	for(int i=0;i<size;i++)
	{   
		if(arr[i]>max) max = arr[i];
	}
	
    for(int i=0;i<size;i++)
	{
     	if(arr[i]==max)
     	{
     		continue;
		}
		if(arr[i]>smax) smax = arr[i];
	}
	return smax;
}
int main()
{
	int arr[5]={8,1,4,2,5};
	int size=5;
	int x=second(arr,size);
	cout<<"second largest element"<<x<<endl;
}
