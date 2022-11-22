#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[])
{
	int i=0;
	int j=0;
	int k=0;
	while(i<n && j<m)
	{
	
	if(arr1[i]<arr2[j])
	{ 
		arr3[k]=arr1[i];
		k++;
		i++;
	}
	else
	{
		arr3[k]=arr2[j];
		k++;
		j++;
	} 
}
	while( i<n)
	{
		arr3[k]=arr1[i];
		k++;
		i++;
	}
	while(j<m)
	{
		arr3[k]=arr2[j];
		k++;
		j++;
	}
} 
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{   int arr1[10]={12,34,45,67,78,80,90,92,95,98};
    int arr2[4]={2,4,17,28};
    int arr3[14];
	merge(arr1,10,arr2,4,arr3);
	print(arr3,14);
	
}








