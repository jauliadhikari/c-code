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
void inshead(node* &head,int data)
{
	node* newnode =new node(data);
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
int mid(node* head)
{
	int count=0;
	node* temp=head;
	while(head!=NULL)
	{
		count++;
		head=head->add;
	}
	int middle=count/2;  
	middle++;
	for(int i=1;i<middle;i++)
	{
		temp=temp->add;
	}
	cout<<temp->data<<endl;
	
}
void del(node* &head,int post)
{
	node* prev = head;
	
	for(int i =1;i<post-1;i++)
	{
		prev = prev->add;
	}
	
	node* curr = prev->add;
	
	prev->add = curr->add;
	
	delete curr;
	
}
int main()
{
    node* node1=new node(10);
	node* head=node1;
	inshead(head,20);
	inshead(head,30);
	inshead(head,40);
	inshead(head,50);
	inshead(head,60);
	inshead(head,70);
	
	print(head);
	mid(head);
}
