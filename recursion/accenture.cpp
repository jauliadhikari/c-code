#include<bits/stdc++.h>
using namespace std;
int fun(int x)
{
	
	int even=0;
	int odd=0;
	int digit=x;
	int n;
	while(digit!=0)
	{
		n=digit%10;
		if(n%2==0) even = even+n;
		else odd = odd+n;
		digit=digit/10;
	}
	return max(even,odd)
;	
}

int main()
{
	int x;
	cin>>x;
	cout<<"sum of largest num is "<<fun(x);
}
