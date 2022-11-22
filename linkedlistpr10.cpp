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
	node* newnode=new node(data);
	newnode->add=head;
	head=newnode;
}

void insertail(node* &tail,int data)
{
	node* newnode=new node(data);
	tail->add=newnode;
	tail = newnode;
}
void print(node* head)
{   while(head!=NULL)             
   {
	cout<<head->data<<endl; 
	head=head->add;
   }
}

void del(node* &head,int post)
{   node* prev=head;
	for(int i=1;i<post-1;i++)
	{
		prev=prev->add;
	}
	node* curr=prev->add;
	prev->add=curr->add;
	delete curr;
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
	inserthead(head,70);
	inserthead(head,80);
	inserthead(head,90);
	
	print(head);
	
	
	del(head,4);
	cout<<"     ---------------------------------    "<<endl;
	print(head);
}







