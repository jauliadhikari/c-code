#include<iostream>
using namespace std;
int is_sum(int x)
{
	if(x==0)
	{
		return 0;
	}
	int result= x + is_sum(x-1);
	
	return result;
}
int main()
{
	int x;
	cin>>x;
	cout<<is_sum(x);
}
