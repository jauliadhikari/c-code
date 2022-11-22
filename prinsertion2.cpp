#include<iostream>
using namespace std;
void insertion(int arr[],int size);
void print (int arr[],int size);
int main()                                           
{
	int arr[5]={1,2,3,4,5};
	insertion(arr,5);
	print(arr,5);
}
void insertion(int arr[],int size)
{   int temp,j;
	for(int i=1;i<size-1;i++)
	{ temp=arr[i];
		for( j=i-1;j>=0;j--)
		{
		  if(temp<arr[j])
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
void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}







