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
class B 
{
	public:
		void bb()
		{
			cout<<"i am from b class"<<endl;
		}
};
class C : public A, public B
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
}
