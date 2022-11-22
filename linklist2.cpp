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
void inserttail(node* &tail,int x)
{
	node* newnode=new node(x);
	tail->add=newnode;
	tail=newnode;
}
void insertmid(node* &head,int post,int x)
{
	
	for(int i=0;i<post;i++)
	{
		head=head->add;
	}
	
	node* newnode=new node(x);
	newnode->add=head->add;
	head->add=newnode;
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
	node * node1=new node(10);
	node* head=node1;
	node* tail=node1;
	
	inserthead(head,20);
	
	inserthead(head,30);
	
	inserthead(head,40);
	
	inserthead(head,50);
	
	inserthead(head,60);
	
	inserthead(head,70);
	print(head);
	
	//rev(head);
	
	insertmid(head,3,100);
	
	print(head);
}
