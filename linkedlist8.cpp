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
	node* newnode= new node(data);
	newnode->add=head;
	head=newnode;
}
void inserttail(node* &tail,int data)
{
	node* newnode= new node(data);
	tail->add=newnode;
	tail=newnode;
}
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->add;
	}
}
void reverse(node* &head)
{   //                                       2,4,8,9,10
	node* prev = NULL;
	node* curr = head;
	node* forward;
	while(curr!=NULL)
	{
		forward = curr->add;
		curr->add=prev;
		prev = curr;
		curr= forward;
	}
	head = prev;
	
	
	
}
int main()
{

	node* node1=new node(10);
	node* head=node1;
	node* tail=node1;
	inserthead(head,20);
	inserthead(head,30);
	inserthead(head,40);
	inserthead(head,50);
	inserthead(head,60);
	inserthead(head,70);
	print(head);
	reverse(head);
	cout<<"after reverse "<<endl;
	
	print(head);
	
	
}

