#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>> n>>m;
	int arr[n];
	map<int,int>res;
	int max1=0;
	int val=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(res.find(arr[i])==res.end())
		   res[arr[i]]=1;
		else
		   res[arr[i]]++;
		if(i==0)
		{
			cout<<arr[i]<< " "<< res[arr[i]]<<endl;
			val=arr[i];
			max1=res[arr[i]];
		}
		else
		{
			if(max1 == res[arr[i]] and arr[i]>val)
			{
				val=arr[i];
			}
			else if(res[arr[i]]> max1)
			{
				val=arr[i];
				max1=res[arr[i]];
			}
			cout<<val<<" "<<max1<<endl;
			
		}
	}
}

