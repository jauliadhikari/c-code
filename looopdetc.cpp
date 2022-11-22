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
	temp->add->add->add=temp->add;
}

bool is_loop(node* &head)
{
	node* slow=head;
	
	node* fast=head;
	
	
	while(slow !=NULL && fast!=NULL)
	{
		fast=fast->add;
		if(fast!=NULL)
		{
			fast=fast->add;
		}
		slow=slow->add;
		while(slow==fast)
		{
			return true;
		}
	}
	return false;
}
node* poi(node* &head)
{
	node* slow=head;
	
	node* fast=head;
	
	
	while(slow !=NULL && fast!=NULL)
	{
		fast=fast->add;
		if(fast!=NULL)
		{
			fast=fast->add;
		}
		slow=slow->add;
		while(slow==fast)
		{
			return fast;
		}
	}
	
}
void is_begin(node* head)
{
	node* slow = head;
	node* fast = poi(head);
	
	while(slow != fast)
	{
		slow=slow->add;
		fast=fast->add;
	}
	
	cout<<slow->data<<endl;
}

//is_loop	
//begin
//remove

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
	
	if((is_loop(head))==true)
    {
    	cout<<"present"<<endl;
	}
	else
	{
		cout<<"not present"<<endl;
	}
	
	
	is_begin(head);
}
