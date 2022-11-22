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
	
	
	while(slow!=NULL && fast!= NULL)
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
node* point(node* &head)
{
	   node* slow=head;
	   node* fast=head;
	
	
	while(slow!=NULL && fast!= NULL)
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
void begi(node* &head)
{
	node* slow=head;
	node* fast=point(head);
	while(slow!=fast)
	{
		slow=slow->add;
		fast=fast->add;
	}
	
	cout<<slow->data<<endl;
}

void remove(node* &head)
{
	
	node* temp=begi(head);
	
	while(temp->add!=begi(head))
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
	inserthead(head,60);
	inserthead(head,70);
	
	
	print(head);
	loop(head);
    if(is_loop(head)==true)
    {
    	cout<<"loop"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
	
	
	begi(head);
	
}
