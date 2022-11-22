#include<iostream>
using namespace std;
void reversearray(int arr[],int size)
{
	int j=size-1;
	int i=0;
	while(i<=j)
	{
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
}
void print ( int arr[],int size)
{
	for(int i =0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int size;
	cout<<"eneter the size"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter the elements in the array of size :"<<size<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	reversearray(arr,size);
	cout<<"reverse of an array"<<endl;
	print(arr,size);
}
