#include<iostream>
using namespace std;
void merge_two(int arr1[],int s1,int arr2[],int s2,int arr3[])
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
		k++;
		i++;
	}
	while(j<s2)
	{
		arr3[k]=arr2[j];
		k++;
		j++;
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
	merge_two(arr1,5,arr2,3,arr3);
	print(arr3,8);
}

