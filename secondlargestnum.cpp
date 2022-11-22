//find the second largest element in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v ={6,3,1,9,3};
    int max=INT_MIN,ans=0;
	 for(int i=0;i<v.size();i++)
	{
	 	if(max<v[i])
	 	{
	 		max=v[i];
	 		
		}
		
	}    // cout<<max<<endl;
    for(int i=0;i<v.size();i++)
    {
    	if(v[i]==max)
    	{
    		continue;
		}
	    if(ans<v[i])
	    {
	    	ans=v[i];
		}
		
	}
	cout<<ans;
}
