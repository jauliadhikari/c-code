#include<iostream>
using namespace std;
int sum1(int arr[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum = sum + arr[i];
	}
	return sum;
	
}
void get(int arr[],int size)
{   
   
    for(int i=0;i<size;i++)
	{
		int x=sum1(arr,size);
		arr[i]=x;
		sum1(arr,size);
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}

int main()
{   
    int size=3;
    int arr[3]={1,1,1};
	get(arr,size);
	
	
}
