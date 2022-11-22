#include<bits/stdc++.h>

using namespace std;
int fun(vector<int>& nums) 
    {
        int a=0; int b=0;
        sort(nums.begin(),nums.end());
         for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<endl;
        }
        
        for(int i=0;i<nums.size()-1;i++)
        {
            a=nums[i]*nums[i+1];
            break;
        }
        reverse(nums.begin(),nums.end());
        for(int j=0;j<nums.size()-1;j++)
        {
        	b=nums[j]*nums[j+1];
        	break;
        	
		}
        
        
        int ans=abs(b-a);
        return ans;
    }
    int main()
    {   vector<int> nums {7,8,1,1,1,3};
   
    	cout<<fun(nums);
	}
