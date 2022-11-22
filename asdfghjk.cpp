#include<bits/stdc++.h>
using namespace std;
class stu
{
	public:
		string name;
		int uid;
		void getdata()
		{
			cout<<"Enter the Name : "<<endl;
			cin>>name;
			cout<<"Enter the UID : "<<endl;
			cin>>uid;
		}
		void putdata()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"uid  : "<<uid<<endl;
		}
			
};
int main()
{
	stu* obj = new stu;
	
	
	obj->getdata();
	
	obj->putdata();
	
	
	
}
