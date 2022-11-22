#include<bits/stdc++.h>
using namespace std;
class node{
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
	node* newnode =new node(x);
	newnode->add=head;
	head=newnode;
}
void reverse(node* &head)
{   
    node* curr=head;
	node* prev=NULL;
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
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
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
	inserthead(head,60);
	print(head);
	
	reverse(head);
	
	print(head);
	
}
