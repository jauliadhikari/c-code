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
	node* newnode = new  node(x);
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
void reverse1(node* &head)
{
	node* current=head->add;
	node* prev=current;
	
	node* forward;
	while(current!=NULL)
	{
		forward = current->add;
		current->add=prev;
		prev=current;
		current = forward;
	}
	head = prev;
	
}




int main()
{
	node* node1=new node(5);
	
	node* head=node1;
	
	
	
	inserthead(head,4);
	inserthead(head,3);
	inserthead(head,2);
	inserthead(head,1);
	
	print(head);
	
	cout<<"after rev"<<endl;
	
	reverse1(head);
	print(head);
}
