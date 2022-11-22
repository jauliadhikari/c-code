#include<iostream>
using namespace std;
class A
{  int a,b;
	public:
	void input()
	{
		cout<<"enter the value"<<endl;
		
		cin>>a>>b;
		
	}
	private:
		
	void i()
	{
		cout<<9<<endl;
	}
	
	friend void add(A obj);
	
	
};
void add(A obj)
{
	int c=obj.a+ obj.b;
	cout<<c<<endl;
}
int main()
{
	A obj;
	obj.input();
	add(obj);
	return 0;
}
