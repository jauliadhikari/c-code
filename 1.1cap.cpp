#include<iostream>
using namespace std;
int main()
{   int size=5,temp=0,j=0;
    int arry[size];
	int arr[size]={2,13,21,78,65};
	for(int i=0;i<size;i++)
	{
		temp=arr[i]%10;
		arry[j]=temp;
		j++;
		
	}
	for(int i=0;i<size;i++)
	{
		cout<<arry[i]<<endl;
	}
	
	
}
