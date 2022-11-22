#include<iostream>
#include<string.h>
using namespace std;
void say_digit(int digit)
{ 
    
	string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	if(digit==0)
	{
		return ;
	}
	int temp=digit%10;
	digit=digit/10;
	
	say_digit(digit);
	
	cout<<arr[temp]<<" ";
}
int main()
{
	int digit;
	cin>>digit;
	say_digit(digit);
	
}
