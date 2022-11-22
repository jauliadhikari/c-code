#include<iostream>
using namespace std;
class test
{
	public:
		int x;
		test()
		{
			x=2;
			cout<<x<<endl;
		}
		~test()
		{
			cout<<"process has been done parth"<<endl;
		}
		void f1()
		{
			cout<<"f1 is called hey:"<<endl;
		}
    static void f2()
        {
        	cout<<"static function is called"<<endl;
		}
};
int main()
{                                                                     
	test obj;
	test::f2();
	
}
