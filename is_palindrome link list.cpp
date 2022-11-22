#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* add;
		node(int x)
		{
			data = x;
			add = NULL;
		}
};

void inserthead(node* &head,int x)
{
	node* newnode = new node(x);
	newnode->add = head;
	head = newnode;
}
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head = head->add;
	}
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

bool is_pal(node* head)
{
	node* temp=head;
	stack <int> s;
	
	while(temp!=NULL)
	{
		s.push(temp->data);
		temp=temp->add;
	}
	
	while(head!=NULL)
	{
		if(s.top()!=head->data)
		{
			return false;
		}
		
		head=head->add;
		
		s.pop();
	}
	
	return true;
}




int main()
{
	node* node1 = new node(10);
	
	node* head = node1;
	
	inserthead(head,10);
	inserthead(head,10);
	inserthead(head,50);
	inserthead(head,10);
	inserthead(head,10);
	
	print(head);
	
	cout<<"after rev"<<endl;
	
	rev(head);
	
	print(head);
	
	cout<<"is pal"<<endl;
	
	if(is_pal(head)==true)
	cout<<"palindorme : "<<endl;
	else
	cout<<"not pal : "<<endl;
	
    //:):):):)
	
}
