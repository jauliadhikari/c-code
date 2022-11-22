#include<iostream>
using namespace std;
void mergetwo(int arr1[],int s1,int arr2[],int s2,int arr3[])
{
	int i=0;
	int j=0;
	int k=0;
	while(i<s1 && j<s2)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k]=arr1[i];
			i++;
			k++;
		}
		else
		{
			arr3[k]=arr2[j];
			j++;
			k++;
		}
	}
	while(i<s1)
	{
		arr3[k]=arr1[i];
		i++;
		k++;
	}
	while(j<s2)
	{
		arr3[k]=arr2[j];
		k++;
		j++;
	}
}
void print(int arr[],int size)
{
	for(int k=0;k<size;k++)
	{
		cout<<arr[k]<<endl;
	}
	
}
int main()
{
	int arr1[3]={67,89,90};
	int arr2[5]={12,34,45,66,78};
	
	int arr3[8];
	
	mergetwo(arr1,3,arr2,5,arr3);
	
	print(arr3,8);
}
