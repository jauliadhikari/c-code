#include<bits/stdc++.h>
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
	~node()
	{
		cout<<"node crushed"<<endl;
	}
};
void inserthead(node* &head,int x)
{
	node* newnode=new node(x);
	newnode->add=head;
	head=newnode;
}
void insertail(node* &tail,int x)
{
	node* newnode=new node(x);
	
	tail->add=newnode;
	tail=newnode;
}
void insertmid(node* &head,int post,int x)
{
	node* temp=head;
	for(int i=0;i<post-1;i++)
	{
		temp=temp->add;
	}
	node* newnode=new node(x);
	newnode->add=temp->add;
	temp->add=newnode;	
}
void rev(node* &head)
{
	node* curr=head;
	node* forw;
	node* prev=NULL;
	
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
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->add;
	}
}
void del(node* &head,int post)
{
	node* prev=head;
	for(int i=0;i<post-1;i++)
	{
		prev=prev->add;
	}
	node* curr=prev->add;
	prev->add=curr->add;
	
	delete curr;
}
int main()
{
	node* node1=new node(10);
	node* head=node1;
	node* tail=node1;
	
	inserthead(head,20);
	inserthead(head,30);
	
	inserthead(head,40);
	
	inserthead(head,50);
	print(head);	
	
	del(head,2);
	print(head);
	
}
