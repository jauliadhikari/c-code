#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
		int data;
		node* front;
		node* back;
		node(int x)
		{
			data=x;
			front=NULL;
			back=NULL;
		}
};

void insert(node* &head)
{
	node* newnode=new node(20);
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
	
	insert(head);
	insert(head);
	insert(head);
	insert(head);
	insert(head);
	insert(head);
	insert(head);
	
	print(head);
}
