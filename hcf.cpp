#include<iostream>
using namespace std;
int main()
{
	int num1,num2,temp,ans;
	cin>>num1>>num2;
	if(num1>=num2)
	{
		temp=num1;
	}
	else
	{
		temp=num2;
	}
	for(int i=2;i<=temp;i++)
	{
		if(num1%i==0 && num2%i==0)
		{   
		    ans=i;
		}
		
	}cout<<"hcf"<<ans<<endl;
	
	for(int i=2;i<=temp;i++)
	{
		if(num1%i==0 && num2%i==0)
		{   
		    ans=i;
		    break;
		}
		
	}cout<<"lcm"<<ans<<endl;
}
