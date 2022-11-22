#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* add;
		node(int x)
		{
			add = NULL;
			data = x;
		}
};
void inserthead(node* &head,int x)
{
	node* newnode = new node(x);
	newnode->add = head;
	head = newnode;
}
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<"data = "<<head->data<<endl;
		head = head->add;
	}
}
void reverse(node* &head)
{
	node* prev = NULL;
	node* curr = head;
	node* forward;
	while(curr!=NULL)
	{
		forward = curr->add;
		curr->add = prev;
		prev = curr;
		curr = forward;
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
	
	print(head);
	reverse(head);
	cout<<"------------------------------"<<endl;
	print(head);
	
	
}
