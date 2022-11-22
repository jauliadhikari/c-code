#include<iostream>
using namespace std;
int count(int x)
{
	
	if(x==0)
	{
		return 0;
	}
	else
	{   
	    cout<<x<<endl;
	    return	count(x-1);
	}
	
	
}
int main()
{
	cout<<count(50)<<endl;
}
