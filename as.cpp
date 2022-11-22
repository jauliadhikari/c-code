#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5]={1,2,3};
	int size=5;
	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
		   for(int k=j+1;k<size;k++)
		   {
		   	
		   	cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
			cout<<arr[j]<<" "<<arr[i]<<" "<<arr[k]<<endl;
			cout<<arr[k]<<" "<<arr[j]<<" "<<arr[i]<<endl;
			//cout<<arr[j]<<arr[i]<<endl;

		   }
		}
	}
}
