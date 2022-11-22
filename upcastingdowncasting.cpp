#include<iostream>
using namespace std;
class duck
{
	public:
	void eyes()
	{
	 	cout<<"eyes"<<endl;
	}
	void quack()
	{
	 	cout<<"quack-quack"<<endl;
	}
};
class rubberduck :public duck
{
	public:
		void eyes()
		{
			cout<<"rubberduck eyes red"<<endl;
		}
		void quack()
		{
			cout<<" sounds different"<<endl;
		}
};
class woddenduck: public rubberduck
{
	public:
		void eyes()
		{
			cout<<"brown eyes"<<endl;
		}
		void quack()
		{
			cout<<"no sound"<<endl;
		}
};
int main()
{
	woddenduck obj;
	
	rubberduck* ptrrub = &obj;
	
	duck* ptrdc = &obj;
	
	obj.quack();
	
	ptrrub-> quack();
	
	ptrdc->quack();
	
	
	
	
}
