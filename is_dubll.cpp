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
void print(node* head)
{
	while(head!=NULL)               
	{
		cout<<head->data<<endl;
		head=head->add;
	}
}
void is_dub(node* head)
{   int temp;
    node* p=head;
	while(head!=NULL)
	{
		temp=head->data;
		p=head->add;
		while(p!=NULL)
		{
			if(temp==p->data)
			{
				cout<<"dublicate"<<temp<<endl;
				break;
			}
			p=p->add;
		}
		head=head->add;
	}
}
int main()
{
	node* node1=new node(10);
	node* head=node1;
	inserthead(head,20);
	inserthead(head,30);
	inserthead(head,40);
	inserthead(head,50);
	inserthead(head,50);
	inserthead(head,60);
	inserthead(head,50);
	inserthead(head,50);
	inserthead(head,60);
	print(head);
	cout<<"dublicate"<<endl;
	is_dub(head);
}
