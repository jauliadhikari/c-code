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

class node
{
	public:
	student data;
	node* add;
	node(string x)
	{
		data = x;	
		add = NULL;
	}	
	~node()
	{
		cout<<"node crushed bhai sahab "<<endl;
	}
};
void insertathead(node* &head,string x)
{
	node* newnode = new node(x);
	newnode->add=head;
	head = newnode; 
}
void inserttail(node* &tail,string x)
{
	node* newnode = new node(x);
	tail->add= newnode;
	tail = newnode;
}
void insertmid(node* &head,int post,string x)
{
	node* newnode = new node(x);
	
	node* prev = head;
	
	for(int i =1;i<=post-1;i++)
	{
		prev = prev->add;
	}
	newnode->add = prev->add;
	prev->add = newnode;
}
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<"data => "<<head->data<<endl;
		head = head->add;
	}
	
}
void del(node* &head,int post)
{
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
int main()
{
	string str = "a";
	node* node1 = new node(str);
	
	node* head = node1;
	node* tail = node1;
	int ch,post;
	
	
	while(true)
	{
		cout<<"enter the choice : \n 1. for insert at head \n 2. insert at tail \n 3. for insert at mid \n 4. print \n 5. delete a node \n 6. exit :"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			cout<<"enter the data :"<<endl;
			cin>>x;
			insertathead(head,x);
			break;
			case 2:
			cout<<"enter the data :"<<endl;
			cin>>x;
			inserttail(tail,x);
			break;
			case 3:
				cout<<"enter the data and then postion "<<endl;
				cin>>x>>post;
				insertmid(head,post,x);
				break;
			case 4:
				cout<<"printing the data :"<<endl;
				print(head);
				break;
			case 5:
				cout<<"enter the postion that you want to delete :"<<endl;
				cin>>post;
				del(head,post);
				break;
			case 6:
				exit(0);
				break;
			default:
				cout<<"no such option available :"<<endl;
				break;
			}		
	}	
}
