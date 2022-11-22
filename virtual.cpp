#include<iostream>
using namespace std;
class base
{
	public:
		virtual void print()
		{
			cout<<"virtual function"<<endl;
		}
};
class derived: public base
{
	public:
		void print()
		{
			cout<<"derived class"<<endl;
		}
};

int main()
{
	base* bptr;
	derived d;
	bptr=&d;
	
	
	bptr->print();
	
}
