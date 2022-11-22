#include<iostream>
using namespace std;
int is_even(int x)
{   
    static int ans=0;
	if(x==0)
	{
		return 0;
	}
	if(x%2==0)
	{
		cout<<x<<" "<<" num is even"<<endl;
		ans=ans+x;
	}
	
	is_even(x-1);
	return ans;
}
int main()
{
	int x=100;
	cout<<is_even(x);
}
