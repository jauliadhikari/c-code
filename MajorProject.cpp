#include<iostream>
#include<string>
using namespace std;
int average(int arr[],int size)
{
	int sum = 0;
	for(int i =0;i<size;i++)
	{
		sum = sum + arr[i];
	}
	
	int avg = sum/size;
	
	return avg;	
}
string grade(int average)
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
class student
{
	public:
		string name;
		int roll_no;
		
		int marks[5];
		student()
		{
			cout<<"ENTERT THE NAME : "<<endl;
			cin>>name;
			cout<<"ENTERT THE roll number : "<<endl;
			cin>>roll_no;
			cout<<"ENTERT THE MARKS OF 5 SUBJECTS : "<<endl;
			for(int i =0;i<5;i++)
			{
				cin>>marks[i];
			}
		}
		void calculate()
		{
			int avg = average(marks,5);
			cout<<"Average marks of "<<name<<" "<<avg;
			cout<<"Grade marks of "<<name<<" "<<grade(avg);
		}
		void display()
		{
			cout<<"NAME OF THE STUDENT : "<<name<<endl;
			cout<<"ROLL NUMBER OF THE STYUDENT : "<<roll_no<<endl;
			cout<<"Marks of Different subject : "<<endl;
			int j = 1;
			for(int i=0;i<5;i++)
			{
				cout<<"MARKS OF SUBJECT "<<j++<<" : "<<marks[i]<<endl;
			}
		}
	
};
class node{
	public:
		student data;
		node* add;
		node()
		{
			add = NULL;
		}
		~node()
		{
			cout<<"Data Deleted : "<<endl;
		}
};
void inserthead(node* &head)
{
	node* newnode = new node();
	newnode->add = head;
	head = newnode;
}
int postfind(node* head,int roll)
{
	int result=1;
	while(head!=NULL)
	{
		if(head->data.roll_no==roll)
		{
			break;
		}
		result++;
		head=head->add;
	}
	return result;
}
void del(node* &head,int roll)
{
	int post=postfind(head,roll);	
	node* prev = head;
	for(int i=1;i<post-1;i++)
	{
		prev = prev->add;
	}
	node* current = head;
	current =  prev->add;
	
	prev->add=current->add;
	
	delete current;
}                           
void search(node* head,int key)
{
	
	while(head!=NULL)
	{
		if(head->data.roll_no==key)
		{
			head->data.display();
		}
		head=head->add;
	}
	
}
void print(node* head)
{
	while(head!=NULL)
	{
		head->data.display();
		head = head->add;
	}
}
int main()
{
	node* head = NULL;
	int ch,roll;
	while(true)
	{
		cout<<"enter your choice : \n1.Create student record \n2. Search student record \n 3. Display all students records \n 4.Delete student record \n 5.Exit"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				inserthead(head);
				break;
			case 2:
				cout<<"enter the roll number that you want to search"<<endl;
				cin>>roll;
				search(head,roll);
				break;
			case 3:
				print(head);
				break;
			case 4:
				cout<<"enter the roll number that you want to delete :"<<endl;
				cin>>roll;
				del(head,roll);
				break;
			case 5:
				exit(0);
				break;
			case 6:
				cin>>roll;
				cout<<postfind(head,roll);
				break;
			default:
				cout<<"NO SUCH OPTION AVAILABLE :"<<endl;
				break;
		}
		
	}

}














