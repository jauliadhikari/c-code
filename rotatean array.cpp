#include<iostream>
using namespace std;
void reverse(int arr[],int start,int end)
{ 
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		start++;
		end++;
	}
} 
void rotate(int arr[],int size,int k)
{
	reverse(arr,0,size-(k+1));
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
	int arr[6]={23,12,45,34,19};
	int k;
	cout<<" enter value of k"<<endl;
	cin>>k;
	rotate(arr,6,k);
	print(arr,6);
	
	
}








