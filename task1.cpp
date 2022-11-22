#include<iostream>
using namespace std;
int max(int arr[],int size)
{   
	int x,min,j;
	
	     min=0;
	  for( j=1;j<size;j++)
	  {
	    if(arr[j]>arr[min])	 
	    {
	    	min=j;
		}
	  }
	  return arr[min];
}

int main()
{   int arr[5]={2,9,6,7,4};
	//max(arr,5);
	cout<<"min = > "<<max(arr,5);
}
	
	
	
