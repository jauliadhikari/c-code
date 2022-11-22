#include<bits/stdc++.h>
using namespace std;
void sub(int arr1[],int arr2[],int target,int size,vector<int> &ans)
{   
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(abs(arr1[i]-arr2[j])==target)
			{
				ans.push_back(i);
				ans.push_back(j);
				
			}
		}
	}
}

int main()
{
   int arr1[3]={3,4,10};
   int arr2[3]={1,4,8};
   int target,size=3;
   vector<int> ans;
   cout<<"enter target"<<endl;
   cin>>target;
   sub(arr1,arr2,target,size,ans) ;
   for(int i=0;i<ans.size();i++)
   {
   	    cout<<ans[i]<<" ";
   }
}
