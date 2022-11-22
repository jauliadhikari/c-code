#include<bits/stdc++.h>
using namespace std;
class A
{
	public:
		int X,Y,Z=0;
		string str;
		A()
		{
			X=10;
			Y=20;
			Z=30;
		}
		
		A(string name)
		{
		   str=name;	
		}
		
		
	    virtual	void display()=0;
	
};
class B : public A
{
	public:
		void display()
		{
			cout<<"function is overridden"<<endl;
		}
};
int main()
{
   
    B obj;
    obj.display();
    
}
