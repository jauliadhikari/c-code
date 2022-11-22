// pure virtual function 
#include<iostream>
using namespace std;
class duck
{ 
	
	virtual void eyes() =0;
	virtual void quack() =0;
	
};
class realduck : public duck
{
	void eyes()
	{
		cout<<"small beautiful eyes "<<endl; 	
	}	
	void quack()
	{
		cout<<" quack quack : "<<endl;
	}
};
class woodenduck : public duck 
{
	public:
	void eyes()
	{
		cout<<"brown eyes :"<<endl;
	}	
	void quack()
	{
		cout<<"No quack : "<<endl;
	}
};
int main()
{
	woodenduck obj;
	obj.quack();	
}

