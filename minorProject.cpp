#include<iostream>
#include<string>

using namespace std;
int average(float arr[],int size)
{
	int sum = 0;
	for(int i =0;i<size;i++)
	{
		sum = sum + arr[i];
	}
	
	int avg = sum/size;
	
	return avg;	
}
string grade(float average)
{
	string grade;
			if(average>=90)
			{
			   grade='A';
			   return grade;
			}
			else if(average>=80)
			{
				grade='B';
				return grade;
			}
			else if(average>=70)
			{
				grade='B';
				return grade;
			}
			else if(average>=40)
			{
				grade='C';
				return grade;
			}
			else if(average<40)
			{
				grade='fail';
				return grade;
			}
}
class student   // name roll_no marks 5 subject marks 
{
	public:
	string name;
	int roll_no;
	int nosub;
	
	student()
	{
		nosub = 5;
	}
	float* marks = new float[nosub];
	void input()
	{
		cout<<"Enter the student name - "<<" ";
		cin>>name;
		cout<<"Enter the student roll number - "<<" ";
		cin>>roll_no;
		cout<<"enter the marks of the student :  "<<endl;
		int j= 1;
		for(int i=0;i<nosub;i++)
		{
			cout<<"Marks of subject "<<j++<<" ";
			cin>>marks[i];
		}
		cout<<"INPUT COMPLETED: "<<endl;
	}
	void output()
	{
		cout<<"NAME OF THE STUDENT : "<<name<<endl;
		cout<<"ROLL NUMBER OF THE STYUDENT : "<<roll_no<<endl;
		cout<<"Marks of Different subject : "<<endl;
		int j = 1;
		for(int i=0;i<nosub;i++)
		{
			cout<<"MARKS OF SUBJECT "<<j++<<" : "<<marks[i]<<endl;
		}
	}
	void report()
	{
		float avg;
		cout<<"Name : "<<name<<endl;
		cout<<"Roll number : "<<roll_no<<endl;
		avg = average(marks,nosub);
		cout<<"Average marks of "<<name<<" is "<<avg;
		cout<<"Grade of "<<name<<" is "<<grade(avg);
	}
	
};
void search(student st[],int key,int size)
{
	for(int i = 0;i<size;i++)
	{
		if(st[i].roll_no == key)
		{
			st[i].output();
			break;
		}
	}
}
void del(student st[],int key,int &size)
{
	int post;
	for(int i = 0;i<size;i++)
	{
		if(st[i].roll_no == key)
		{
			post = i;
			break;
		}
	}
	
	while(post <= size)
	{
		st[post]= st[post+1];
		post++;
	}
	size--;
	size--;
	
}
void modify(student st[],int key,int size)
{
	int post;
	for(int i = 0;i<size;i++)
	{
		if(st[i].roll_no == key)
		{
			post = i;
			break;
		}
	}
	st[post].input();	
}
int main()
{
	student* st= new student[20];
	int j= 0;
	int ch;
	int key;
	int s;
	while(true)
	{
	
	cout<<"enter your choice : \n1.Create student record \n2. Search student record \n 3. Display all students records \n 4.Delete student record \n 5.Modify student record \n 6.Exit"<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			cout<<"Creating a Student Record : "<<endl;
			st[j].input();
			j++;
			break;
		case 2:
			cout<<"Search student record : \n Enter the Student Roll number : "<<endl;
			cin>>key;
			
			search(st,key,j++);
			break;
		case 3:
			for(int i =0;i<j;i++)
			{
				st[i].output();
			}
			break;
		case 4:
			cout<<"Enter the Roll_number of the student for which you want to delete the data "<<endl;
			cin>>key;
			del(st,key,j);
			break;
		case 5:
			cout<<"enter the roll number of the student of which you want to modify data :"<<endl;
			cin>>key;
			modify(st,key,j);
			break;
		case 6:
			exit(0);
			break;
		default:
			cout<<"NO such option available :"<<endl;
			break;			
}	
}	
}
