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

int main()
{
	B objb;
	objb.aa(5);
	objb.bb();
}
