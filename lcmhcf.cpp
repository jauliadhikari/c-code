#include<iostream>
using namespace std;
class divisor
{
	public:
		int temp,hcf1;
		divisor()
		{   
		    hcf1=0;
			temp=0;
		}
	int hcf(int num1,int num2)	
	{
		if(num2>num1)
		{
			temp=num2;
		}
		for(int i=2;i<temp;i++)
		{
			if(num1%i==0 && num2%i==0)
			{
				hcf1=i;
				return hcf1;
			}
		}
	}
	int LCM(int num1,int num2)
	{
		if(num2>num1)
		{
			temp=num2;
		}
		else
		{
			temp=num1;
		}
		for(int i=2;i<=temp;i++)
		{
			if(num1%i==0 && num2%i==0)
			{
				return i;
				break;
			}
		}
	}
};
int main()
{   int x,y;
    cin>>x>>y;
	divisor* obj=new divisor;
	cout<<obj->hcf(x,y)<<endl;
	cout<<obj->LCM(x,y)<<endl;
}
