#include<iostream>
using namespace std;
class base
{
	public:
		void jauli()
		{
			cout<<"hello base class"<<endl;
		}
};
class derived:public base
{
	void jauli()
	{
		cout<<"base class"<<endl;
	}
};
int main()
{
	base* ptr;
	base obj;
	obj.jauli();
	
}
