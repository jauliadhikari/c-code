#include<iostream>
using namespace std;
int main()
{
	int arr[6]={1,2,3,4,5,6};
	int size=6;
	
	for(int i=0;i<size;i++)
	{
		swap(arr[i],arr[i+1]);
		cout<<arr[i]<<" "<<arr[i+1]<<" ";
		i++;
	}
}
