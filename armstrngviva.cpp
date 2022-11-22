#include<iostream>
using namespace std;
int main()
{
	int x,temp,cube=0,sum=0,num;
	cin>>x;
	num=x;
	while(num!=0)
	{                                                       
		temp=num%10;
		sum=sum+temp*temp*temp;
		num=num/10;
	}
	cout<<sum<<endl;
	if(sum==x)
	{
		cout<<"armstrng"<<endl;
	}
	else
	{
		cout<<"not armstrng"<<endl;
	}
	
	
}
