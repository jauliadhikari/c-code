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
void insertail(node* &tail,int x)
{
	node* newnode=new node(x);
	tail->add=newnode;
	tail=newnode;
}
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->add;
	}
}
bool is_pal(node* head)
{
	
	stack<int> st;
	
	node* temp = head;
	
	
	while(head!=NULL)
	{
		
		st.push(head->data);
		
		head= head->add;
	}
	
	while(temp!=NULL)
	{
		
		if(temp->data != st.top() )
		{
			return false;
		}
		temp=temp->add;
		st.pop();
		
		
	}
	return true;
}
int main()
{
	node* node1=new node(10);
	node* head=node1;
	node* tail=node1;
	
	insertail(tail,10);
	
	insertail(tail,10);
	
	insertail(tail,10);
	
	insertail(tail,10);

	print(head);
		
	if(is_pal(head))
	{
		cout<<"yes palindrome"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
	
}
