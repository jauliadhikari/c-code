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

void loop(node* &head)
{
	node* temp=head;
	temp->add->add->add->add->add=temp->add;
}
bool is_loop(node* head)
{
	node* slow=head;
	node* fast=head;
	
	while(slow !=NULL && fast != NULL)
	{
		fast=fast->add;
		if(fast!=NULL)
		{
			fast=fast->add;
		}
		slow =slow->add;
		if(slow==fast)
		{
			return true;
		}
	}
	return false;
	
}
node* poi(node* head)
{
	node* slow=head;
	node* fast=head;
	
	while(slow !=NULL && fast != NULL)
	{
		fast=fast->add;
		if(fast!=NULL)
		{
			fast=fast->add;
		}
		slow =slow->add;
		if(slow==fast)
		{
			return fast;
		}
	}
	
	
}
node* beg(node* head)
{
	node* slow=head;
	node* fast=poi(head);
	
	while(slow != fast)
	{
		fast=fast->add;
		slow =slow->add;
		
	}
	return fast;
	
}
void remove(node* head)
{
	node* temp=beg(head);
	
	while(temp->add!=beg(head)) 
	{
		temp=temp->add;
	}
    temp->add=NULL;
}


int main()
{
	node* node1=new node(10);
	
	node* head=node1;
	
	inserthead(head,20);
	
	inserthead(head,30);
	
	inserthead(head,40);
	
	inserthead(head,50);
	
	print(head);
	
	loop(head);
	
	cout<<"loop is "<<is_loop(head)<<endl;
	
	
	remove(head);
	
	cout<<"loop is"<<" "<<is_loop(head)<<endl;
	
	print(head);
}
