#include<iostream>
using namespace std;
class node
{   public:
	int data;
	node* add;
	
	node(int x)
	{
		data=x;
		add=NULL;
	}
	~node()
	{
		cout<<"node is destroyed"<<endl;
	}
};
void inserthead(node* &head,int x)
{
	node* newnode=new node(x);
	newnode->add=head;
	head=newnode;
}
void inserttail(node* &tail,int x)
{
	node* newnode=new node(x);
    tail->add=newnode;
	tail=newnode;
	
}
void insertmid(node* &head,int post,int x)
{
	node* temp=head;
	for(int i=0;i<post-1;i++)
	{
		temp=temp->add;
	}
	node* newnode=new node(x);
	node* forw=temp->add;
	newnode->add=forw;
	temp->add=newnode;

}
void rev(node* &head)
{
	node* prev=NULL;
	node* curr=head;
	node* forw;
	while(curr!=NULL)
	{
		forw=curr->add;
		curr->add=prev;
		prev=curr;
		curr=forw;
	
	}
	head=prev;
}

void del(node* &head,int post)
{   node* temp=head;
   
	for(int i=0;i<post-1;i++)
	{
		temp=temp->add;
	}
	node* curr=temp;
    node* forw=curr->add;
	
	curr->add=forw->add;
	delete forw;
	
}

void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->add;
	}
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
	
	rev(head);
	del(head,3);
	print(head);
	
	
	
}
