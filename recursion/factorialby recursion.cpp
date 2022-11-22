#include<iostream>
using namespace std;
int fact(int x)
{   
    static int result=1;
	if(x==0)
	{
	return 1;
    }
    
    result=result*x;
    fact(x-1);
    
    return result;
}
int main()
{
	int x;
	cin>>x;
	
	cout<<fact(x);
}
