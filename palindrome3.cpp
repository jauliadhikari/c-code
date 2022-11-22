#include<iostream>
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
void Inserthead(node* &head,int data)
{
	node* newnode = new node(data);
	newnode->add=head;
	head=newnode;
}
void Print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->add;
	}
}
bool palindrome(node* head)
{
	stack<int> s;
	node* temp = head;
	while(head!=NULL)
	{
		s.push(head->data);
		head = head->add;
	}
	
	int i;
	while(temp!=NULL)
	{
		i = s.top();
		s.pop();
		
		if(temp->data!=i)
		{
			return false;
		}
		temp = temp->add;
	}
	return true;
}  

int main()
{
    node* node1=new node(10);
	node* head=node1;
	Inserthead(head,20);
	Inserthead(head,30);
	Inserthead(head,40);
	Inserthead(head,50);
	Inserthead(head,60);
	Inserthead(head,70);
	
	Print(head);
	
	cout<<palindrome(head);
}




