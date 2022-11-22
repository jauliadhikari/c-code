#include<iostream>
using namespace std;
int main()
{   int num,temp,sum,result;
	cout<<"enter the num "<<endl;
	cin>>num;
	int originalnum=num;
	
	while(num!=0)
	{
		temp=num%10;
		result =temp*temp*temp;
		sum=result+sum;
		num=num/10;
	}
	if(sum==originalnum)
	{
		cout<<"armstrong num"<<endl;
	}
	else
	{
		cout<<"not armstrong"<<endl;
	}

}
