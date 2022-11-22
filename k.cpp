#include<iostream>
using namespace std;
int mimum(int arr[],int size)
{
	int i=0;
	int temp = arr[i];
	for(int j=1;j<size;j++)
	{
		if(arr[i]>arr[j])
		{
			temp=arr[j];
			i=j;
		}
	} return temp;
}
int max(int arr[],int size)
{
	int i=0;
	int temp=arr[i];
	for(int j=1;j<size;j++)
	{
		if(arr[i]<arr[j])
		{
			temp=arr[j];
			i=j;
		}
	} return temp;
}
int main()
{   int answer;
int answer1;
    int size;
	cout<<"enter the size and array"<<endl;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	answer=mimum(arr,size);
	answer1=max(arr,size);
	cout<<"min and max number in the array is "<<answer<<<<answer1<<endl;
}
