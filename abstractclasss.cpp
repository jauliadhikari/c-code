#include<iostream>
using namespace std;
class A
{
	public:
		virtual void display()
		{
			cout<<"i am from A class"<<endl;
		}
};
class B : public A
{
	public:
		void display()
		{
			cout<<"i am from class B"<<endl;
		}
};
int main()
{
	A* ptr;
	B bptr;
	ptr = &bptr;

   ptr->display();
}
