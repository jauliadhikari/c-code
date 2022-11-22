#include<iostream>
using namespace std;
int f1(int &x)
{
	x++;

	
}
int main()
{
	int x =5;
	f1(x);
	
	cout<<x;
}
