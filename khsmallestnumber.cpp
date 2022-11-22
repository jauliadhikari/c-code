#include<bits/stdc++.h>
using namespace std;
int smallest(int arr[],int size,int k)
{
	sort(arr,arr+size);   
	return arr[k-1];
}

int main()
{
	int arr[6]={2,8,1,5,4,0};
	int size=6;
	int k=3;
	cout<<smallest(arr,size,k);
	
}
