#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public:
		string name,grade;
		int rollno;
		int average;
		int size;
	    int sum;
		student()
		{
	     sum=0;
	    }
		
		void enterdetail()
		{   int size;
			cout<<"enter details"<<endl;
			cout<<"enter name"<<endl;
			cin>>name;
			cout<<"enter rollno"<<endl;
			cin>>rollno;
			cout<<"enter marks for hindi,english,maths,sci,computer respectively "<<endl;
			cout<<"enter size"<<endl;
			int* marks = new int[size];
			cin>>size;
			for(int i=0;i<size;i++)
			{
				cin>>marks[i];
				sum=sum+marks[i];
			}
			average=sum/size;
		}
		void getdetail()
		{
			cout<<"details "<<endl;
			cout<<"name of student"<<name<<endl;
			cout<<"rollno"<<rollno<<endl;
			cout<<"average marks"<<average<<endl;
			if(average>=90)
			{
			   grade="A";
			   cout<<grade;
			}
			else if(average>=80)
			{
				grade="B+";
				cout<<grade;
			}
			else if(average>=70)
			{
				grade="B";
				cout<<grade;
			}
			else if(average>=40)
			{
				grade="C";
				cout<<grade;
			}
			else if(average<40)
			{
				grade="fail";
				cout<<grade;
			}
			
		}
	
};
int main()
{  cout<<"enter size "<<endl;
   int size,rollno;
   while(true)
  { 
   cin>>size;
   student obj[size];
   for(int i=1;i<=size;i++)
   { 
     obj[i].enterdetail();
   }
   //obj.enterdetail();
   cout<<"for details enter rollno"<<endl;
    for(int i=1;i<=size;i++)
   { 
     obj[i].getdetail();
   }
   
		
   }
     
  }

