#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> minimumAbsDifference(vector<int>& arr)
    {
        vector<vector<int> > ans{};
        vector<int> ans1{}; vector<int> ans2{};
        int min=INT_MAX;
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size()-1;i++)
        {
             int x=abs(arr[i]-arr[i+1]);
             if(min>=x)
             {
                 min=x;
                 ans1.push_back(arr[i]);
                 ans1.push_back(arr[i+1]);
                
                 ans1.clear();
             }
              
        }
        for(int i=0;i<ans1.size()-1;i++)
        {
             int x=abs(ans1[i]-ans1[i+1]);
             if(min>=x)
             {
                 min=x;
                 ans2.push_back(ans1[i]);
                 ans2.push_back(ans1[i+1]);
             }
             ans.push_back(ans2);
              
        }
        // minimum distance nikal jis jiska minimum hai usko sirf inse
        return ans;
    }
int main()
{
	vector<int> arr={40,11,26,27,-20};
	vector<vector<int> > x=minimumAbsDifference(arr);
	for(int i=0;i<x.size();i++)
	{
		for(int j=0;j<x.size();j++)
		{
			cout<<x[i][j];
		}
		cout<<endl;
	}
   	
} 
