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
void is_even(node* head)
{   
	int temp;
    while(head!=NULL)
    {
    temp=head->data;
      
	if(temp%2==0)
	{
		cout<<"even "<<temp<<endl;
	}
	head=head->add; 
	}
	
}
int main()
{
	node* node1=new node(10);
	node* head=node1;
	inserthead(head,20);
	inserthead(head,33);
	inserthead(head,43);
	inserthead(head,55);
	inserthead(head,5);
	inserthead(head,60);
	print(head);
	is_even(head);

}
