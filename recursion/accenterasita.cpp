#include<bits/stdc++.h>
using namespace std;
int oddevensum
{
  vector<int> arr(n);
	
	int temp = 0;
	
	int odd = 0;
	int even = 0;
	
	while(n!=0)
	{
		temp = n % 10;
		arr.push_back(temp);
		n = n/10;
	}
	
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]%2==0)
		{
			even = even + arr[i];
		}
		else
		{
			odd = odd + arr[i];
		}
	}
}
int main()
{
	
}
	
