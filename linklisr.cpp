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
void inserthead(node* &head,int data)
{  
    node* newnode=new node(data);
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
bool search(node* head,int x)
{
	while(head!=NULL)
	{
		if(head->data==x)
		{
			return true;
		}
		head=head->add;
	}
	return false;
}
void is_dub(node* head)
{            
	int arr[100];
	int i=0,t=0;	                                   
	node* temp = head;
	while(temp!=NULL)
	{
		arr[i]=temp->data;
		i++;
		t++;
		temp=temp->add;
	}
	
	sort(arr,arr+t);
	// 1,2,3,4,5,4,3 1,2,3,3,4,4,5
	
	for(int i=0;i<t;i++)
	{
		if(arr[i]==arr[i+1])
		{
			cout<<arr[i]<<" ";
		}
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
	inserthead(head,70);
	inserthead(head,30);
	inserthead(head,50);
	
		
	
	print(head);
	cout<<"-------------------------------------------"<<endl;
	is_dub(head);
}
