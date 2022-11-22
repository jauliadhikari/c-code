#include<iostream>
using namespace std;
void pal(int x)
{
	int digit=x;
	int ans=0,temp=0;
	while(digit!=0)
	{
		temp=digit%10;
		ans=ans*10+temp;
		digit=digit/10;
	}
	if(x==ans)
	{
		cout<<"paldrome"<<endl;
	}
	else
	{
		cout<<"not paldrome"<<endl;
	}
}
int main()
{
	int x;
	cin>>x;
	pal(x);
}
