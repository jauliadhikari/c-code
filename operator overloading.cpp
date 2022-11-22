#include<iostream>
using namespace std;
class demo
{
	public:
		int i;
		void get()
		{
			cout<<"enter the value"<<endl;
			cin>>i;
		}
		void set()
		{
			cout<<"the value"<<i<<endl;
		}
		demo operator + (demo x)
		{
			demo result;
			result.i =  i   *   x.i;
			return result;
		}
		
	
};
int main()
{
	demo obj1,obj2,result;
	obj1.get();
	obj2.get();
	result=obj1 + obj2;
	
	cout<<result.i<<endl;
}
