#include<iostream>
using namespace std;
class node
{   public:
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

void rev(node* &head)
{
	node* forw=NULL;
	node* cu=head;
	node* prev=NULL;
	
	while(cu!=NULL)
	{
		forw=cu->add;
		cu->add=prev;
		prev=cu;
		cu=forw;
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
	
	inserthead(head,80);
	
	inserthead(head,90);
	
	inserthead(head,100);
	
	
	print(head);
	
	cout<<"after reverse"<<endl;
	
	rev(head);
	
	print(head);
	
	
	
}
