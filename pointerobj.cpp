#include<iostream>
using namespace std;
class student
{
	public:
		string name,uid;
		void getdata()
		{  
		    cout<<"enter name of student"<<endl;
			cin>>name;
			cout<<"enter uid of student"<<endl;
			cin>>uid;
		}
		void setdata()
		{
			cout<<"name"<<name<<endl;
		    cout<<"uid"<<uid<<endl;
		}
};
int main()
{
	student* obj;
	obj->getdata();
	obj->setdata();
}
