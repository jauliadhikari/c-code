#include<iostream>
using namespace std;
void insertion(int arr[],int size)
{  
    int i,j,temp;

    for(i=1;i<size;i++)
    {  
	    temp=arr[i];
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
	    }
	    arr[j+1]=temp;
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
	int size;
	cout<<"enter the number of disk"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter the sizes : "<<endl;
	for(int i =0;i<size;i++)
	{
		cin>>arr[i];
	}
	insertion(arr,size);
	print(arr,size);
}
