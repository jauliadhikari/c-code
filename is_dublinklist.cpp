#include<iostream>
using namespace std;
class node
{
	public:
		node* add;
		int data;
		node(int x)
		{
			data=x;
			add=NULL;
		}
};
void inserthead(node* &head,int x)
{   
    node* newnode=new node(x);
	newnode->add=head;
	head=newnode;
}
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->add;
	}       
}
void is_dub(node* head)
{
	node* forr = NULL;
	int temp=0;
	while(head!=NULL)
	{   
		temp=head->data;
		forr=head->add;
		while(forr!=NULL)
		{
			if(temp==forr->data)
			{
				cout<<temp<<endl;
				break;
			}
			forr=forr->add;
		}
		head=head->add;
	}
}

int main()
{
	node* node1=new node(10);
	node* head=node1;
	inserthead(head,20);
	inserthead(head,30);
	inserthead(head,40);
	inserthead(head,50);
	inserthead(head,20);
	inserthead(head,40);
	print(head);
	cout<<"------------------------"<<endl;
	is_dub(head);
	
	
}
