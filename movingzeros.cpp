#include<iostream>
using namespace std;
void mv(int arr[],int size)
{   int j=0;
	for(int i=0;i<size;i++)
	{   
		if(arr[i]!=0)
		{
			swap(arr[i],arr[j]);
			j++;
		}
	}
	
}

void print (int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}


int main()
{
	int arr[7]={2,4,0,1,5,0,0};
	mv(arr,7);
	print(arr,7);
}
