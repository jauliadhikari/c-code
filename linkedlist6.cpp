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
void print(node* head)
{   while(head!=NULL)
    {
	cout<<head->data<<endl;
	head=head->add;
    }
}
int main()
{ 
   node* node1=new node(10);
   node* head=node1;
   node* tail=node1;
   inserthead(head,20);
   inserthead(head,40);
   inserthead(head,60);
   inserthead(head,100);
   inserttail(tail,200);
   inserttail(tail,500);
   inserttail(tail,600);
   print(head);
}

