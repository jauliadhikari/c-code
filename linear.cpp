#include<iostream>
using namespace std;
int linear(int arr[],int size,int key)
{
	for(int i=0;i<size;i++)
	{
		if (arr[i]==key)
		{
			return i;
		}
	}
}     
int main()
{
	int arr[5]={34,12,45,36,89};
	cout<<linear(arr,5,89)<<endl;
	
}
