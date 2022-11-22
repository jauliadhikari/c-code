#include<iostream>
using namespace std;

void bubble ( int arr[],int size)
{
	for(int i =0; i<size-1;i++)
	{
		for(int j= 0 ; j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

void print(int jauli[],int size)    
{
	for(int i =0;i<size;i++)
		cout<<jauli[i]<<endl;
}
int main()
{
	int gadha[5]={5,4,3,2,1};
	bubble(gadha,5);
	print(gadha,5);
}
