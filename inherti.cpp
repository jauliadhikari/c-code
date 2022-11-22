#include<iostream>
using namespace std;
class car
{
	
	public:
		void brake()
		{
			cout<<"brake is there"<<endl;
		}
		
		void wheels();
		
		void brake(char a)
		{
			cout<<a<<"brake without char"<<endl;
		}
};

void car::wheels()
{
	cout<<"wheels"<<endl;
}
int main()
{
	car obj;
	car* a=&obj;
	
	a->brake();
	
	a->brake('a');
	
	a->wheels();
	
}
