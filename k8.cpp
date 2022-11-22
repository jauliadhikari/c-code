#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a1,a2,a3;
	getline(cin,a1);
	getline(cin,a2);
	int x=a1.length();
	int y=a2.length();
	cout<<x<<" "<<y<<endl;
	a3=a1+a2;
	cout<<a3<<endl;
	swap(a1[0],a2[0]);
	cout<<a1<<" "<<a2<<endl;	
	
	
}
