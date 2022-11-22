#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* add;
	node(int x)
	{
		data = x;
		add = NULL;
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
		cout<<"data ==> "<<head->data<<endl;
		head = head->add;
	}
}
// 80 70 60 50 [40] 30 20 10   = 8/2 = 4
// 70 60 50 [40] 30 20 10   = 7/2 = 3
void mid(node* head)
{
	node* slow = head;
	node* fast = head;
	while(fast!=NULL && fast->add != NULL)
	{
		slow = slow->add;
		fast = fast->add->add;
	}
	
	cout<<"Mid data : "<<slow->data<<endl;
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
	inserthead(head,80);
	
	print(head);
	
	mid(head);
}
