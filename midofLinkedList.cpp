// 1. finding the mid element 2. check the palindrome ll 
//1,2,3,4,5,6
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
void mid(node* head)
{
	int count = 0;
	node* temp = head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->add;
	}
	int mid;
	if(count%2 == 0)
	{
		mid = count/2;	
	}
	else if(count%2!=0)
	{
		mid = count/2;
		mid++;
	}
	
	cout<<"mid "<<mid;
	
	node* prev = head;
	for(int i=1;i<=mid-1;i++)
	{
		prev= prev->add;
	}
	cout<<"mid data : "<<prev->data;

}
int main()
{
	node* node1 = new node(10);
	
	node* head = node1;
	
	
	inserthead(head,20);
	inserthead(head,30);
	inserthead(head,40);
	inserthead(head,50);
	inserthead(head,60);
	inserthead(head,70);
	inserthead(head,80);
	print(head);
	mid(head);
}


