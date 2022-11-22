#include<iostream>
using namespace std;
class a
{
	public:
		int num1;
		static int num2;
	void get()
	{
		cout<<"enter the number :"<<endl;
		cin>>num1;
		cout<<"enter the number 2 :"<<endl;
		cin>>num2;
	}	
	void inc()
	{
		num1++;
		num2++;
	}
	void show()
	{
		cout<<"num1 = "<<num1<<endl;
		cout<<"num2 = "<<num2<<endl;
	}
};
int a::num2 = 10;
int main()
{
	a a1,a2,a3;
	cout<<"enter the data of obj1 "<<endl;
	a1.get();
	cout<<"enter the data of obj2 "<<endl;
	a2.get();
	cout<<"enter the data of obj3 "<<endl;
	a3.get();
	a1.inc();
	a2.inc();
	a3.inc();
	cout<<"obj1"<<endl;
	a1.show();
	cout<<"obj2"<<endl;
	a2.show();
	cout<<"obj3"<<endl;
	a3.show();
}

