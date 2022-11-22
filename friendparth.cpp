#include<iostream>
using namespace std;
class parth
{
	private:
		void food()
		{
			cout<<"he loves pizza and fast food"<<endl;
		}
		void intelligent()
		{
			cout<<"he is intelligent pagal"<<endl;
		}
		void photography()
		{
			cout<<"he loves to take pictures of models"<<endl;
		}
		void Gadgets()
		{
			cout<<"he have so many gadgets ,he likes trading "<<endl;
		}
		friend class thakar;
		
};
class thakar
{
	public:
		parth obj1;
	
		void worship()
		{
			cout<<"he is into indian culture and believes in GOD"<<" ";
			obj1.food();
			obj1.Gadgets();
		}
	
};
int main()
{
	thakar obj;
	obj.worship();
	
}
