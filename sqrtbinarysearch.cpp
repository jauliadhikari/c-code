// 16 = 
#include<iostream>
using namespace std;
int sqrt(int n)
{
	int start =0;
	int end = n/2;
	
	int mid = start+(end-start)/2;
	int ans =0;
	while(start<=end)
	{
		if(mid*mid==n)
		{
			return mid;
		}	
		if(mid*mid>n)
		{
			end=mid-1;
		}
		else
		{
			ans = mid;
			start=mid+1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}
int main()
{
	int n;
	cout<<"enter the number that you want to find the square root off :"<<endl;
	cin>>n;
	cout<<"sqaure root is  :"<<sqrt(n);
}
