#include<iostream>
using namespace std;
void reverse(int arr[],int start, int end)
{   //int start=0;
    //int end=size-1;
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	
}
void rotate(int arr[],int size,int k)
{
	reverse(arr,0,size-k-1);
	reverse(arr,size-k,size-1);
	reverse(arr,0,size-1);
}
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[7]={1,2,3,4,5,6,7};
	int k=2;
	rotate(arr,7,k);
	print(arr,7);
}
