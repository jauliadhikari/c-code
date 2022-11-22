#include<iostream>
#include<string.h>
using namspace std;
class student
{
	public:
	string name;
	int roll_no;
	int cls;
	static int flag;
	void set()
	{
		flag++;
		cout<<"enter the details of student "<<flag<<endl;
		cout<<"name == > ";
		getline(cin,name);
		cout<<"roll number == >";
		cin>>roll_no;
		cout<<"class ==> ";
		cin>>cls;
	}
	void get()
	{
		flag++;
		cout<<"details of student "<<endl;
		cout<<name<<endl;
		cout<<roll_no<<endl;
		cout<<cls<<endl;
	}
};
int student::flag=0;
int main()
{
	int i;
	student s1[3];
	for(i=0;i<3;i++)
	{
		s1[i].set();
	}
	for(i=0;i<3;i++)
	{
		s1[i].get();
	}
}

