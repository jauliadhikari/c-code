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
	for(int i=1;i<post-1;i++)
	{
		temp=temp->add;
	}
	node* newnode=new node(x);
	newnode->add=temp;
	temp->add=newnode;
}
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->add;
	}
}
int main()
{
	node* node1 = new node(10);
	
	node* head = node1;
	node* tail = head;
	inserthead(head,20);
	inserthead(head,21);
	inserthead(head,22);
	inserthead(head,23);
	inserthead(head,24);
	inserthead(head,25);
	inserthead(head,26);
	
	
	insertail(tail,89);
	
	
	print(head);
}
