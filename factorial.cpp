#include<iostream>
using namespace std;
int factor(int x)
{    
	int temp=1;
	for(int i=x;i>=1;i--)
	   temp=temp*i;
	return temp;
}
int main()
{
    cout<<factor(5)<<endl;
	
}



