#include<iostream>
using namespace std;

int sqrt(int n)
{
	int start=1,temp=0;
	int end=n;
	int mid=start+(end-start)/2;
	while(start<=end)
	{   
	   if(mid*mid == n)
	   {
	   	return mid;
	   }
	   if(mid*mid<n)
	   {
	   	start = mid+1;
	   }
	   else
	   {
	   	end = mid-1;
	   }
	   mid = start + (end - start)/2;
	}
}
int main()
{
	int n;
	cout<<"int n"<<endl;
	cin>>n;
	cout<<sqrt(n);
}
