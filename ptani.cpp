#include<iostream>
using namespace std;
void merge(int arr1[],int s1,int arr2[],int s2,int arr3[])
{   int i=0;
    int j=0;
    int k=0;
	while(i<s1)          
	{
		arr3[k]=arr1[i];
		i++;
		k++;
	}
	while(j<s1)
	{
		arr3[k]=arr2[j];
		j++;
		k++;
	}
	
}
void bubble(int arr[],int size)
{   
    for(int i=0;i<size-1;i++)
    {
       	for(int k=0;k<size-1;k++)
       	{
       		if(arr[k]>arr[k+1])
       		{
       			swap(arr[k],arr[k+1]);
			}
		}
	}
	
}                                
void print(int arr3[],int size)
{
	for(int k=0;k<size;k++)
	{
	  cout<<arr3[k]<<endl;
	}
}
                  
int main()
{
	int arr1[5]={2,3,8,9,10};
	int arr2[3]={30,56,80};
	int arr3[8];
	merge(arr1,5,arr2,3,arr3);
	bubble(arr3,8);
	print(arr3,8);
} 
