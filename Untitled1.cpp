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
void Inserthead(node* &head,int data)
{
	node* newnode = new node(data);
	newnode->add=head;
	head=newnode;
}
void Print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->add;
	}
}
void del(node* &head,int post)
{
	node* prev = head;
	
	for(int i =1;i<post-1;i++)
	{
		prev = prev->add;
	}
	
	node* curr = prev->add;
	
	prev->add = curr->add;
	
	delete curr;
	
}
void rev(node* &head)
{
	node* prev=NULL;
	node* curr=head;
	node* forward=NULL;
	
	while(curr!=NULL)
	{
		forward = curr->add;
		curr->add = prev;
		prev = curr;
		curr = forward;
	}
	
	head=prev;
	
}








