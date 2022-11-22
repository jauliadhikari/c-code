#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node* add;
		node(int x)
		{
			data=x;
			add=NULL;
		}
};
void inserthead(node* &head,int x)
{
	node* newnode= new node(x);
	newnode->add=head;
	head=newnode;
}
void insertail(node* &tail,int x)
{
	node* newnode= new node(x);
	tail->add=newnode;
	tail=newnode;
}
void print(node* head)
{   
    while(head!=NULL)
    {
	cout<<head->data<<endl;
	head=head->add;
    }
}
void del(node* head,int post)
{
	node* prev=head;
	for(int i=1;i<post;i++)
	{
		prev=prev->add;
	}
	node* current=prev->add;
	prev->add=current->add;
	delete current;
}
int main()
{
	node* node1=new node(5);
	node* head=node1;
	node* tail=node1;
	while(head!=NULL)
	{
	cout<<" 1 for inserthead /n 2 for inserttail /n 3 for print  /n 4 for del "<<endl;
	int ch;
	cin>>ch;
	switch (ch)
	{
		case 1:
			int x;
			cin>>x;
			inserthead(head,x);
			break;
		case 2:
			int y;
			cin>>y;
			insertail(tail,y);
			break;
		case 3:
			print(head);
			break;
		case 4:
			int post;
			cin>>post;
			del(head,post);
			break;
		case 5:
			exit(0);
			break;
		default:
			cout<<"no such key"<<endl;
		}
	}
}




