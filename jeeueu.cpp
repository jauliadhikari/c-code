#include<iostream>
using namespace std;
int main()
{
	int x,y;
	
	cout<<"Enter the X value :"<<endl;
	cin>> x;
	cout<<"Enter the Y value :"<<endl;
	cin>>y;
	try
	{
		if(y == 0)
		{
			throw y;
		}
		else
		cout<<"Division is "<<x/y<<endl;
	}
	catch(int)
	{
		cout<<"Second value cannot be zero : "<<endl;
	}
	
	
	
}
