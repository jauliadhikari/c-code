#include<bits/stdc++.h>
using namespace std;
bool is_leap(int x)
{   
	if(x % 4 ==0 && x%100 != 0 || x%400 == 0)
	return true;
	
	return false;
	
}
int main()
{
	int x;
	cin>>x;
	if(is_leap(x))
	{
		cout<<"leap year";
	}
	else
	{
		cout<<"not a leap year";
	}
}
