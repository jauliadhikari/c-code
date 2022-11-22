#include<iostream>
using namespace std;
int linear(int arr[],int size,int key)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			return i;
			break;
		}
	}
	//else
	//{
		//cout<<"not present"<<endl;
	//}//
}
int main()
{
	int arr[5]={1,3,2,6,5};
	cout<<linear(arr,5,6)<<endl;
}
