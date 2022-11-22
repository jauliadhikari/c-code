#include<bits/stdc++.h>
using namespace std;
int climbStairs(int n) 
{
        //vector<int> v={0,1,2,3,4,5,6,7,8,9};
        int count=1;
        for(int i=0;i<=n;i++)
        {
            for(int j=i+1;j<=n-1;j++)
            {
                if((i+j)==n)
                {
                    count=count+2;
                    //cout<<count;
                }
            }
        }return count;
}
int main()
{
	cout<<climbStairs(2);
}
