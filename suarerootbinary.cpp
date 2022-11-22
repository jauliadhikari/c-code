#include<iostream>
using namespace std;
int sqrt(int n)
{   int ans;
	int start=1;
	int end=n;
	int mid=start+end/2;
	while(start<=end)
	{   int square=mid*mid; 
	                    
		if(square==n)
		{
			return mid;
		}
		else if (square<n)
		{   
		    ans=mid;
			start=mid+1;
			
		}
		else
		{
			end=mid-1;
		}
		mid=start+end/2;
	}return ans;
	
}
int main()
{   int x;
	cin>>x;
	cout<<sqrt(x)<<endl;
	
}
