#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* add;
		node(int x)
		{
			data = x;
			add = NULL;
		}
};
void insertathead(node* &head,int data)
{
	node* newnode = new node(data);
	newnode->add = head;
	head = newnode;
}
void hu(node* head)
{                     
	stack<int> s1;
	while(head!=NULL)
	{
		if(head->data% 2== 0)
		{
			s1.push(head->data);
		}
		head = head->add;
	}
	
	while (s1.empty()!=1) 
	{
		cout<<"1st pair "<<endl;
		for(int i =1;i<=2;i++)
		{
        cout << " " << s1.top();
        s1.pop();
    	}
    	cout<<endl;
    	cout<<" 2nd pair "<<endl;
        for(int i =1;i<=2;i++)
		{
        cout << " " << s1.top();
        s1.pop();
    	}
    }
}
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head = head->add;
	}
}
int main()
{
	node* node1=new node(16);
	node* head=node1;
	insertathead(head,12);
	insertathead(head,9);
	insertathead(head,8);
	insertathead(head,2);
	insertathead(head,1);
	
	print(head);
	
	cout<<" ------------------------------------------ "<<endl;
	
	hu(head);
}
