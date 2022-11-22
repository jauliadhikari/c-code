#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[5]={1,0,6,3,2};
	
	int size=5,maxi=0,temp;
	
	for(int i=0;i<size;i++)
	{  
		temp = arr[i]*arr[i+1];
		maxi = max(maxi,temp);
    }
	cout<<maxi;
}
