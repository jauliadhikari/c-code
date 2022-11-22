#include<iostream>
using namespace std;
int main()
{
	int num,temp,rev;
	cin>>num;
	int x=num;
	while(num!=0)
	{	
	temp=num%10;
	rev=rev*10+temp;
	num=num/10;
	}
	if(x==rev)
	{
		cout<<"pallendrome"<<endl;
	}
	else
	{
		cout<<"not pallendrome"<<endl;
	}
}
