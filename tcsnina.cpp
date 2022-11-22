//145 = 5! + 4! + 1! = 145
#include<iostream>
using namespace std;
int factor(int x)
{
	int temp=1;
	for(int i = x; i>=1; i--)
	{
		temp = temp*i;
	}
	return temp;
}
int main()
{
	int str,check,temp;
	int ans=0;
	cout<<"enter the number that you want to check wether it is a strong number or not "<<endl;
	cin>>str;
	check = str;
	while(str!=0)
	{
		temp = str % 10;
		ans = ans + factor(temp);
		str = str / 10;
	}
	
	if(ans==check)
	{
		cout<<"yes"<<endl;
	}
	else
	cout<<"no"<<endl;
	
}
