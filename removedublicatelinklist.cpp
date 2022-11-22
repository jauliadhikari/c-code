#include<bits/stdc++.h>
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
		cout<<head->data<<" ";
		head=head->add;
	}
}

void del(node* head,node* temp)
{
	node* prev=head;
	
	while(prev!=temp)
	{
		prev=prev->add;
	}
	
	prev->add=temp->add;
	
	delete temp;
	
	
}
void dub(node* &head)
{
	node* temp=head;
	
	map<int,bool> m;
	
	while(temp!=NULL)
	{
	   if(m[temp->data]==false)
	    {
		   m[temp->data]==true;
		   temp=temp->add;
		}
		if(m[temp->data]==true)
		{
			
			node* next=temp->add;
			del(head,temp);
			temp=next;
		}
	}
}


int main()
{
	node* node1=new node(4);
	node* head=node1;
	
	inserthead(head,4);
	inserthead(head,3);
	inserthead(head,3);
	inserthead(head,3);
	inserthead(head,2);
	inserthead(head,2);
	inserthead(head,1);
	inserthead(head,1);
	
	print(head);
	
	cout<<" "<<endl;
	
	dub(head);
	
	cout<<"after "<<endl;
	
	print(head);

}
