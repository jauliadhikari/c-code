#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5};
	
	
	int post = 2;
	
	while(post <= 5)
	{
		arr[post]= arr[post+1];
		post++;
	}
	for(int i = 0 ;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
}
