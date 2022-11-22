#include<iostream>
using namespace std;
int fab(int n)
{   int sum=0;
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	
		sum=fab(n-1)+fab(n-2);
		return sum;
	
	
}
int main()
{
	cout<<fab(6)<<endl;
}
