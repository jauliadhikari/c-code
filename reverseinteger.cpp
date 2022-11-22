#include<iostream>
using namespace std;
int main()
{
	int digit=123;
	int rev=0,temp;
	
	while(digit!=0)
	{
	temp=digit%10;
	rev=rev*10+temp;
	digit=digit/10;
    }
    
    
    cout<<rev;
}
