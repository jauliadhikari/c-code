// arr1[5]={......}  arr2[3]={.....}  arr3[8] = {....}
// 1. Using Comments to explain each block of code 2. using any casing 3. using relveant function name and variable name 4. prpooper identation so that the code will look much clean
#include<iostream>
using namespace std;
void mergeTwoSorted(int arr1[],int s1,int arr2[],int s2,int arr3[])    //  giving name to any function 
{   int i=0,j=0,k=0;
	while(i<s1 && j<s2)
	{
		if(arr1[i]>arr2[j])
		{
			arr3[k]=arr2[j];
			k++;
			j++;										
		}
		else
		{
			arr3[k]=arr1[i];
			k++;
			i++;
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
		j++;
		k++;
	}

}
void print(int arr[],int size)
{
	for(int i =0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr1[5]={1,3,5,7,8};
	int arr2[3]={2,4,6};
	
	int arr3[8];
	
	mergeTwoSorted(arr1,5,arr2,3,arr3);
	
	
	print(arr3,8);
}
