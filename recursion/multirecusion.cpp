#include<iostream>
using namespace std;
int mul(int x)
{
	if(x==0)
	{
		return 1;
	}
	int M=x*mul(x-1);
	return M;
}
int main()
{
	int x;
	cin>>x;
	cout<<mul(x);
}
