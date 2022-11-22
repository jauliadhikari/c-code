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
		cout<<head->data<<endl;
		head=head->add;
	}
}
int couunt(node* head)
{   
    int count=0;
	while(head!=NULL)
	{   
	    count++;
	    head=head->add;
	}
	return count;
    
    

} 
void mid(node* head)
{
	int n = couunt(head);
	n = n/2;
	for(int i=0;i<=n;i++)
	{
		head = head->add;
	}
	
	cout<<head->data<<endl;
}

int main()
{
	node* node1=new node(10);
	node* head=node1;
	inserthead(head,10);
	
	inserthead(head,10);
	
	inserthead(head,10);
	
	inserthead(head,10);
	
	inserthead(head,20);
	
    cout<<couunt(head);
    cout<<endl;
	cout<<"mid value is : "<<endl;
	mid(head);
	
	
}
