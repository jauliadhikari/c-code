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
	node* newnode=new node(x);
	newnode->add=head;
	head=newnode;
}
void rev(node* &head)
{
	node* prev=NULL;
	node* curr=head;
	node* forw=NULL;
	while(curr!=NULL)
	{
		forw=curr->add;
		curr->add=prev;
		prev=curr;
		curr=forw;
	}
	head=prev;
}
void print(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->add;
	}
}
void del(node* &head,int post)
{   
    node* temp=head;
	for(int i=0;i<post-1;i++)
	{
		temp=temp->add;
	}
	node* forw=temp->add;
	temp->add=forw->add;
	
	delete forw;
}

int main()
{   
    node* node1=new node(10);
	node* head=node1;
	inserthead(head,20);
	inserthead(head,30);
	inserthead(head,40);
	inserthead(head,50);
	
	rev(head);
	print(head);
	del(head,3);
	print(head);
	
}
