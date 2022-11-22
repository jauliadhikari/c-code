#include<iostream>
using namespace std;
int repeat(int arr[],int x,int size)
{   
    int temp=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==x)
		{
			temp++;
		}
	}
	return temp;
}
int main()
{   int arr[5]={9,7,9,9,6};
	int y=repeat(arr,9,5);
	cout<<y<<endl;
}
