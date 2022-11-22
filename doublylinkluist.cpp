#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node* back;
		node* front;
		node(int x)
		{
			data=x;
			back=NULL;
			front=NULL;
		}
};
void inserthead(node* &head,int x)
{
	node* newnode=new node(x);
	head->front=newnode;
	newnode->back=head;
	head=newnode;
	
}
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->back;
	}
}
int main()
{
	node* node1=new node(10);
	
	node* head=node1;
	
	
	inserthead(head,20);
	
	inserthead(head,20);
	
	inserthead(head,20);
	
	inserthead(head,20);
	
	inserthead(head,20);
	print(head);
}
