#include<iostream>
using namespace std;
bool is_prime(int num)
{   int count=0;
    for(int j=2;j<num;j++)
    {
    	if(num%j==0)
		{
			count++;
		}
    }
    if(count==0)
    {
    	return true;
	}
	else
	return false;
}
int main()
{   
    for(int i=2;i<100;i++)
    {
    	if(is_prime(i))
    	{
    		cout<<"prime"<<i<<endl;
		}
	}
	
}
