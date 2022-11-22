#include<iostream>
using namespace std;
class A
{
	public:
		void aa(int x)
		{
			cout<<"value of a is "<<x<<endl;
		}
		
};
class B : public A
{
	public:
		void bb()
		{
			cout<<"i am from b class"<<endl;
		}
};
class jj
{
	public:
		void display()
		{
			cout<<"i am inherited to c class"<<endl;
		}
};
class C : public B,public jj
{
	public:
		void cc()
		{
			cout<<"i am from c class"<<endl;
		}
};

int main()
{
	C objc;
	objc.aa(5);
	objc.bb();
	objc.cc();
	objc.display();
}
