#include<iostream>
using namespace std;
class item
{   public:
	int price,qu;
	//static int total;
	
	void input()
	{
	 	cout<<"enter price and quantity"<<endl;
	 	cin>>price>>qu;
	}
	void calculate()
	{
		int x = price*qu;
		cout<<"total amount of item "<<x<<endl;
		//total = total+x;
	}
};
int main()
{  
  item i1,i2,i3;
  
  	i1.input();
  	i1.calculate();
  	i2.input();
  	i2.calculate();
  	i3.input();
  	i3.calculate();
	
	cout<<"total bill generated :" <<endl;
}
