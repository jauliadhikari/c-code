#include<iostream>
using namespace std;
class students
{ 
 public:
 	void name()
 	{
 		cout<<"ayesha "<<endl;
	}
	int ename()
	{   cout<<"enter value"<<endl;
	    int x;
		cin>>x;
		return x;
	}
	
};
int main()
{
	students s1;
	int i=s1.ename();
	cout<<i<<endl;
}
