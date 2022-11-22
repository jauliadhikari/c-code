#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
	string a1;
	string a2,a3;
	getline(cin,a1);
	getline(cin,a2);
	a3=a1+" "+a2;
	cout<<a3<<endl;
	int x=a1.length();
	int y=a2.length();
	if(x==y)
	{
		cout<<"total length"<<x+y<<endl;
	}
	else
	{
		cout<<"length is not equal"<<endl;
	}
	
	
}

