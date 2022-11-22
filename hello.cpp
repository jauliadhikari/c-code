#include<iostream>
#include<string.h>
using namespace std;
class shop{
	public:
		string name;
		string mobile_no;
		static int flag;
		int i;
		void set()
		{
			flag++;
			cout<<"enter the details of customer "<<flag<<endl;
			cout<<"enter name  : "<<endl;
			cin>>name;
			cout<<"enter the mobile nuber of the customer :"<<endl;
			cin>>mobile_no;
			i=flag;
		} 
		void get()
		{ 
		cout<<"details of customer "<<i<<endl;
		cout<<"name ==> "<<name<<endl;
		cout<<"mobile number ==> "<<mobile_no<<endl;
			
		}
	
};
int shop::flag = 0;
int main()
{ 
 shop s1[100];
 for(int i=0;i<100;i++)
 {
 	s1[i].set();
 }
 
 for(int i=0;i<100;i++)
 {
 	s1[i].get();
 }
}
