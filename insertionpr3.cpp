#include<iostream>
using namespace std;
void insertion(int arr[],int size)
{   int temp,j;
	for(int i=1;i<size;i++)
	{   temp=arr[i];
	  for(j=i-1;j>=0;j--)
	  {
	  	if(arr[j]>temp)
	  	{
	  		arr[j+1]=arr[j];
		}
		else
		{
			break;
		}
	  }arr[j+1]=temp;
		
	}
}
print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main()
{
	int arr[5]={4,7,9,0,3};
	insertion(arr,5);
	print(arr,5);
}
