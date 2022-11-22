#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *add;
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
void inserttail(node *tail,int x)
{
	node* newnode=new node (x);
	tail->add=newnode;
	tail=newnode;
}
void insertmid(node* &head,int post,int x)
{
	node* newnode=new node (x);
	node* prev=head;
	for(int i=1;i<post-1;i++)
	{
		prev=prev->add;
	}

	newnode->add=prev->add;
	
	prev->add=newnode;
	
}
void del(node * &head,int post)
{
	node* prev=head;
	for(int i=1;i<post-1;i++)
	{
		prev=prev->add;
	}
	node *curr=prev;
    node *forw=curr->add;
	
	curr->add=forw->add;
	
	//delete curr;
}
void print(node * head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->add;
	}
	
}
void rev(node* head)
{
	
}
int main()
{
      node* node1=new node(10);
      node* head=node1;
      node* tail=node1;
      inserthead(head,20);
      inserthead(head,30);
      inserthead(head,20);
      inserthead(head,30);
      
      inserttail(tail,100);
      insertmid(head,4,120);
      
      del(head,2);
      
      print(head);
}
