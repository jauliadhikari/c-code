#include<iostream>
using namespace std;
class A
{   
    public:
	void f1()
	{
		cout<<"f1 is calling"<<endl;
	}
	
};
class B:public A
{   
    public:
	void f2()
	{
		cout<<"f2 function"<<endl;
	}
};
class C
{   public:
	void f3()
	{
		cout<<"f3 function"<<endl;
	}
};
class D:public C,public B
{   
    public:
	void f4()
	{
		cout<<"f4 function"<<endl;
	}
};
int main()
{
	D obj;
	
	obj.f1();
	obj.f2();
	obj.f3();
	obj.f4();
}




