#include<iostream>
using namespace std;
int factor(int x)
{
	if(x==0 )
	{
		return 0;
	}
	else if(x==1)
	{
		return 1;
	}
	else
	{
		int fact=x*factor(x-1);
		return fact;
	}
}
int main()
{  
    int x;
    cin>>x;
    cout<<factor(x);
}
