#include<iostream>
using namespace std;
int sqroot(int num)
{
	int start=1;
	int end =num;
	int mid=start+(end-start)/2;
	int ans=0;
	while(start<=end)
	{
		if(mid*mid==num)
		{
			return mid;
		}
		else if(mid*mid<num)
		{   
		    ans=mid;
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	} return ans;
}
int main()
{
	int x;
	cin>>x;
	cout<<"root is"<<sqroot(x)<<endl;
}
