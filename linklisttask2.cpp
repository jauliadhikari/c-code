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
	newnode->add =head;
	head=newnode;
}
void loop(node* &head)
{
	node* temp = head;
	while(temp->add!=NULL)
	{
		temp = temp->add;
	}
	
	temp->add = head->add->add;
}
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->add;
	}
}
bool cycle_dect(node* head)
{
	
	map <node*,bool> m;
	node* temp=head;
	while(temp!=NULL)
	{
		if(m[temp]==true)
		{
			return true;
		}
		else
		{
		    m[temp]=true;
		}
		temp=temp->add;
		
	}
	return false;
} 
node* point(node* head)
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
			return fast;
		}
	}		
}
	
void remove(node* &head)
{
	node* temp=point(head);
	
	while(temp->add!=point(head))
	{
		temp=temp->add;
	}
	temp->add=NULL;
	
}
int loop_dect(node* head)
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
			return fast->data;
		}
	}		
}


int main()
{
	
	node* node1 = new node(1);
	
	node* head = node1;
	
	inserthead(head,2);
	inserthead(head,3);
	inserthead(head,4);
	inserthead(head,5);
	inserthead(head,6);
	inserthead(head,7);
	inserthead(head,8);
	
	loop(head);
	
	cout<<loop_dect(head)<<endl;
	
    //print(head);
    
    
    if(cycle_dect(head)==true)
    {
    	cout<<" loop p"<<endl;
	}
	else
	{
		cout<<"loop not"<<endl;
	}
	remove(head);
	
	print(head);
}

