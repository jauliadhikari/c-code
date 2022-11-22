//find the second largest element in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v ={6,3,1,9,3};
    int min=INT_MAX,ans=INT_MAX;
	 for(int i=0;i<v.size();i++)
	{
	 	if(min>v[i])
	 	{
	 		min=v[i];
	 		
		}
		
	}    // cout<<min<<endl;
    for(int i=0;i<v.size();i++)
    {
    	if(v[i]==min)
    	{
    		continue;
		}
	    if(ans>v[i])
	    {
	    	ans=v[i];
		}
		
	}
	cout<<ans;
}
