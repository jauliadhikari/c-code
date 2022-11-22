#include<iostream>
using namespace std;
void merge(int arr1[],int s1,int arr2[],int s2,int arr3[])
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
	for(int i=0;i<size;i++)
	{
		cout<<arr3[i]<<endl;
	}
}
int main()
{
	int arr1[5]={1,4,7,9,10};
	int arr2[4]={2,3,5,8};
	int arr3[9];
	merge(arr1,5,arr2,4,arr3);
	print(arr3,9);
}
