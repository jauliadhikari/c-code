#include<iostream>
#include<strings.h>
using namespace std;
class database
{ 
   public:
   	char name;
   	char midname;
   	char sirname;
   	void name()
   	{
   		cin>>name;
   	    cin>>midname;
   		cin>>sirname;
   	}
   	int day;
   	int month;
   	int year;
   	void dob()
   	{ 
   	    cin>>day;
   	    cin>>month;
   	    cin>>year;
	}
	int hrs;
	int mins;
	int sec;
	void time()
	{
		cin>>hrs;
		cin>>mins;
		cin>>sec;
	}
};
int main()
{ 
   database obj;
   obj.name();
}





