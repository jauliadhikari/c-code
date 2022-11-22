#include<iostream>
using namespace std;
int main()
{   
    int size,sum=0;
	int arr[5]={1,5,4,2,9};
	for(int i=0;i<5;i++)
	{
		sum = sum+arr[i];
	}
	cout<<sum;
}
