#include<iostream>
using namespace std;
class ar
{ 
	public:
		void chai()
		{
			cout<<"morning tea"<<endl;
		}
		int chai(int x)
		{   			  
			cout<<"evening tea"<<endl;
			return x;
		}
};
int main()
{   
	ar a1;
	
	ar *ptr=&a1;
	
	int r = ptr->chai(5);
	
	cout<<r<<endl;
	
}
