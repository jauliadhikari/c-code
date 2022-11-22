#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5};
	
	int j=2;
	while(j<5)
	{
		swap(arr[j],arr[j+1]);
		j++;
	}
	for(int i = 0;i < 5;i++)
	{
		cout<< arr[i] <<endl;
	}
}
