#include<iostream>
using namespace std;
class super{
	public:
		int x;
		super()
		{
			x =2;
		}
		virtual void f1()
		{
			cout<<"f1 is called from super class : "<<endl;
		}
		void f2()
		{
			cout<<"f2 jauli is called :"<<endl;
		}
};
class base : public super
{
	public:
		void f1()
		{
			cout<<"f1 is called from base class : "<<endl;
		}
};
int main()
{
	super* ptr;
	
	base obj;
	
	ptr = &obj;
	
	ptr->f1();
	
	obj.f2();
	
}
