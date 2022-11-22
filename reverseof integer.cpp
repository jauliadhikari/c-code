#include<iostream>
using namespace std;
int reverse(int x)
{
	int temp=0;
	int rev=0;
	int digit=x;
	while(digit!=0)
	{
		temp=digit%10;
		rev=rev*10+temp;
		digit=digit/10;
    }
    return rev;
}
int main()
{
	int x;
	cin>>x;
	cout<<reverse(x)<<endl;
}
