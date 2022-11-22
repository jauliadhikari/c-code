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

void inserthead(node* &head,int data)
{
	node* newnode=new node(data);
	newnode->add=head;
	head=newnode;
}
void print(node* head)
{   while(head!=NULL)             
   {
	cout<<head->data<<endl; 
	head=head->add;
   }
}
void fun(node* &head)
{
	node* prev=head;
	node* curr=prev->add;
	node* forw=curr->add;
	while(prev!=NULL)
	{
		curr->add=prev;
		prev=prev->add;
		curr->add->add=forw;
		forw->add=curr->add;
	}
}

int main()
{   
	node* node1=new node(4);
	node* head=node1;
	
	inserthead(head,3);
	inserthead(head,2);
	inserthead(head,1);
	
	print(head);
	
	
	fun(head);
	
	print(head);
}
