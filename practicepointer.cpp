#include<iostream>
using namespace std;
class car
{   
    public:
	virtual void parts(int x)
	{
		cout<<"no of parts"<<x<<endl;
	}
};
class scar:public car
{   
    public:
	void parts(int x)
	{
		cout<<"small parts"<<x<<endl;
	}
};
int main()
{
	scar obj;
	car *ptr=&obj;
	obj.parts(6);
	ptr->parts(5);
}
