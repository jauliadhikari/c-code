#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[7]={7, 3, 2, 4, 9, 12, 56};
	int size=7;
	sort(arr,arr+size);
	int m,diff,mini=INT_MAX;
	cout<<"enter numb of students"<<endl;
	cin>>m;
	
	for(int i=0;i<size-m;i++)
	{
		int min=arr[i];
		int max=arr[i+m-1];
		diff=max-min;
		if(mini>diff)
		{
			mini=diff;
		}
        		
	}
	cout<<mini<<endl;
}
