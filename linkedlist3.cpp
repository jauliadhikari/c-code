#include<iostream>
using namespace std;
class node{
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
	node* newnode= new node(x);
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

int main()
{
	node* node1=new node(10);
	node* head=node1;
	inserthead(head,50);
	inserthead(head,100);
	inserthead(head,590);
	inserthead(head,520);
	inserthead(head,80);
	print(head);
}
