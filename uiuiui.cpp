#include<iostream>
using namespace std;
int factor(int x)
{    
	int temp=1;
	for(int i=x;i>=1;i--)
	   temp=temp*i;
	return temp;
}
int main()
{
	int rev;
	int temp;
	int ans=0;
	cin>>rev;    
	while(rev!=0)
	{
		temp = rev%10;
		ans = ans + factor(temp);
		rev = rev/10;
	}
	cout<<ans<<endl;
}
