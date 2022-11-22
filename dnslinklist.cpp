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
void print (node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->add;
	}
}

void dub(node* &head)
{ 
    node* curr=head;
	
	while(curr!=NULL)
	{
		if(curr->add != NULL && curr->data == curr->add->data)
		{
			node* todel=curr->add;
			curr->add=curr->add->add;
			delete todel;
		}
		else
		{
			curr=curr->add;
		}
	}
	
	
	
}


int main()
{
	node* node1=new node(4);
	
	node* head=node1;
	
	inserthead(head,4);
	
	inserthead(head,3);
	
	inserthead(head,3);
	
	inserthead(head,2);
	
	inserthead(head,2);
	
	inserthead(head,1);
	
	inserthead(head,1);
	
	print(head);
	
	cout<<"after dns"<<endl;
	
	dub(head);
	
	print(head);
}
