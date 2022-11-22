#include<iostream>
using namespace std;
class base{
	public:
		void f1()
		{
			cout<<"f1 from base class : "<<endl;
		}
};
class derived : public base
{
	public:
		void f1()
		{
			cout<<"f1 from derived class "<<endl;	
		}
};
int main()
{
	base* ptr;
	
	derived dr;
	
	ptr = &dr;
	
	ptr->f1();
	
}
