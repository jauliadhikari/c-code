#include<iostream>
using namespace std; 
bool i_sort(int arr[],int size)
{   
    
	for(int i=0;i<size-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			return false;
		}
	}//cout<<" increasingly sorted"<<endl;
	return true;
}
bool d_sort(int arr[],int size)	
{

	for(int i=0;i<size-1;i++)
	{
		if(arr[i]<arr[i+1])
		{
			return false;
		}
	} //cout<<" decre sorted"<<endl;
	return true;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int size=5;
    if(i_sort(arr,size)==1)
    {
    	cout<<"increase sort"<<endl;
	}
	else if(d_sort(arr,size)==1)
	{
		cout<<"decreas sort"<<endl;
	}
	
}
