#include<iostream>
using namespace std;
void bubble(int arr[],int size)
{ 
   for(int i=0;i<size;i++)
   {
   	for(int j=0;j<size-1;j++)
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
int main()
{   
    int size;
    cout<<"enter size";
    cin>>size;
    int arr1[5]={6,1,8,3,9};
	bubble(arr1,size);
	print(arr1,size);
}
