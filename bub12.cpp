#include<iostream>
using namespace std;
void bubble(int arr[],int size)
{    
   for(int i=0;i<size;i++)
    {
   	    for(int j=0;j<size;j++)
   	    {
   		    if(arr[j]>arr[j+1])
   		    {
   			swap(arr[j],arr[j+1]);
		    }
	    }
	
   }
}

void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}
int main( )
{
	int arr[5]={3,2,1,5,4};
	bubble(arr,5);
	print (arr,5);
}
