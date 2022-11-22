#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[10]={2,1,4,3,5,9,8,10,12,14};
	int even=0;
	int odd=0;
	for(int i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			even=even+arr[i];
		}
		else
		{
			odd=odd+arr[i];
		}
	}
	cout<<"sum of even numbers"<<even<<endl;
	
	cout<<"odd of even numbers"<<odd<<endl;
}
