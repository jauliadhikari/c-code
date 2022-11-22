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
		cout<<head->data<<" ";
		head=head->add;
	}
}
void loop(node* &head)
{
	node* temp=head;
	
	temp->add->add->add=temp->add->add;
}
bool is_loop(node* &head)
{
	node* slow=head;
	node* fast=head;
	
	while(slow!=NULL && fast!=NULL)
	{
		fast=fast->add;
		if(fast!=NULL)
		{
			fast=fast->add;
		}
		
		slow=slow->add;
		if(slow==fast)
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
	
	while(slow!=NULL && fast!=NULL)
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

node* beg(node* head)
{
	node* slow=head;
	node* fast=point(head);
	
	while(slow!=fast)
	{
		//slow=slow->add;
			slow=slow->add;
			fast=fast->add;
	}
	
	//cout<<slow->data<<endl;
	
	return fast;
}


void remove(node* &head)
{
	node* temp = beg(head);
	
	while(temp->add!=beg(head))
	{
		temp=temp->add;
	}
	
	temp->add=NULL;
}



int main()
{
	node* node1=new node(4);
	node* head=node1;
	
	inserthead(head,4);
	inserthead(head,3);
	inserthead(head,3);
	inserthead(head,3);
	inserthead(head,2);
	inserthead(head,2);
	inserthead(head,1);
	inserthead(head,1);
	
	//print(head);
	
	loop(head);
	
	if(is_loop(head)==true)
	{
		cout<<"loop p"<<endl;
	}
	if(is_loop(head)==false)
	{
		cout<<"loop not p"<<endl;
	}
	
    //beg(head);
    
    remove(head);
    
    if(is_loop(head)==true)
	{
		cout<<"loop p"<<endl;
	}
	if(is_loop(head)==false)
	{
		cout<<"loop not p"<<endl;
	}
    
   
}
