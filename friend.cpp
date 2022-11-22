#include<bits/stdc++.h>
using namespace std;
class jauli
{   int x,y,z;
    public:
    	jauli()
    	{
    		x=10;
    		y=30;
    		z=50;
		}
	private:
	   void jy()
    	{
		cout<<x<<y<<z;
		
	    }
	friend void print();   //puri class ko friend bna diya print ka 
};
void print()
{
	jauli obj;
	obj.jy();
	friend class jauli;//it is wrong friend only used inside the class.
}

int main()
{   
	print();
}
