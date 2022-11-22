#include<bits/stdc++.h>
using namespace std;
#include<iostream>
using namespace std;
class A
{
	public:
		int X,Y,Z=0;
		string str;
		A(int I)
		{
			X=I;
			Y=20;
			Z=30;
		}
		
		A(string name)
		{
		   str=name;	
		}
		
		void display()
		{
			cout<<X<<" "<<Y<<" "<<Z<<endl;
		}
};
int main()
{
	A obj(5);
	
	obj.display();
}
