#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5]={1,2,3,4,5};
	int size=5;
	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			cout<<arr[i]<<arr[j]<<endl;
			cout<<arr[j]<<arr[i]<<endl;
		}
	}
}
