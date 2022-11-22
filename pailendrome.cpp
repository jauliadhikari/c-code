#include<iostream>
using namespace std;
int main()
{   int x,temp,jauli,reverse=0,digit;
	cout<<"enter the nub if this is palendrome or not"<<endl;
	cin>>x;
	jauli=x;
	while(x!=0)
	{
		temp=x%10;
		reverse=reverse*10+temp;
		x=x/10;
	}
	cout<<reverse<<endl;
	if(jauli==reverse)
	{
	cout<<" palindrome"<<endl;
	}
	else
	{
		cout<<" no "<<endl;
	}
	
}
