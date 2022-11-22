#include<iostream>
using namespace std;
class base
{
	virtual void f1() = 0;
	virtual void f2() = 0;
};
class derived : public base
{
	public:
	void f1()
	{
		cout<<"f1 overided in derived :"<<endl;
	}
	void f2()
	{
		cout<<"  jjj  ";
		}	
};

int main()
{
	derived dr;
	
	dr.f1();
}
