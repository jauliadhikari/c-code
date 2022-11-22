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
	node* newnode= new node(x);
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
void reverse(node* &head)
{
	node* prev=NULL;
	node* current=head;
	node* forward;
	while(current!=NULL)
	{   
		forward=current->add;
	    current->add=prev;
	    prev = current;
	    current = forward;
	}
	head = prev;
}
int main()
{
	node* node1 = new node(10);
	node* head = node1;
	inserthead(head,20);
	inserthead(head,30);
	inserthead(head,40);
	inserthead(head,50);
	inserthead(head,60);
	inserthead(head,70);
	
	cout<<"before reverse : "<<endl;
	print(head);
	cout<<"after reverse : "<<endl;
	reverse(head);
	print(head);
}






