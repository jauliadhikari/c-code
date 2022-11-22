#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	node* add;
	int data;
	node( int x ) 
	{
		data = x;
		add = NULL;
	}
		
};
void inserthead(node* &head,int x)
{
	node* newnode = new node(x);
	newnode->add = head;
	head = newnode;
}
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<"data = "<<head->data<<endl;
		head = head->add;
	}
}
bool checkPl(node* head)        // checkPl = camel casing   
{
	stack <int> s;
	
	node* temp = head;
	
	while(temp!=NULL)
	{											///	,2,3,4,5,6,7
		s.push(temp->data);
		temp=temp->add;
	}
	
	while(head!=NULL)
	{
		if(head->data!=s.top())
		{
			return false;
		}
		s.pop();
		head = head->add;
	}
	return true;
}


int main()
{
	node* head = NULL;
	inserthead(head,10);
	inserthead(head,10);
	inserthead(head,10);
	inserthead(head,10);
	inserthead(head,10);
	inserthead(head,10);
	inserthead(head,10);
	print(head);
	
	if(checkPl(head))
	{
		cout<<"yes it is Palindrome linked list :  "<<endl;
	}
	else
	{
		cout<<"No it is not a palindrome linked list : "<<endl;
	}
	
	
	// merge sort != html css in my laptop
	
}
