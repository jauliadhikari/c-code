#include<iostream>
using namespace std;
int main()
{
	int digit,num,temp=0,rev=0;                 
	cin>>digit;
	num=digit;
	while(num!=0)
	{   
	   temp=num%10;
	   rev=rev*10+temp;
	   num=num/10;
	}
	cout<<rev<<endl;
	
	if(rev==digit)
	{
		cout<<"palindrome"<<endl;
	}
	else
	{
		cout<<"not palindrome"<<endl;
	}
}
