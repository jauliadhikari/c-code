#include<iostream>
using namespace std;
class jauli
{
	public:
		int a,b;
		jauli()
		{
			a=10;b=12;
		}
	    virtual	void display()
		{
			cout<<" i am from class jauli"<<endl;
		}
};
class adhikari: public jauli
{
	public:
		void display()
		{
			cout<<"i am from adhikari class"<<endl;
		}
		void dis()
		{
			cout<<" second function of adhikari"<<endl;
		}
};
int main()
{
	jauli  *j;
	adhikari obj;
	j=&obj;
	
	j->display();
	
	
	
}
