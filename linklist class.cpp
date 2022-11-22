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

void is_even(node* &head)
{   
    int arr[5],i=0,temp;
    while(head!=NULL)
    {
	 temp=head->data;
	 {
	 if(temp%2==0)
	  {
		arr[i++]=temp;
	  }
	head=head->add;
     } 
   }
	
	for(int i=0;i<4;i++)
	{
	cout<<arr[i]<<endl;
    }
    rev(arr,4,0);
    
}

void reverse(node* &head)
{
	node* prev=NULL;
	node* current=head;
	node* forward;
	while(current!=NULL)
	{
		forward=current->add;
		current->add=prev;
		prev=current;
		current=forward;
	}
	head=prev;
}
int main()
{
	node* node1=new node(16);
	node* head=node1;
	inserthead(head,12);
	inserthead(head,9);
	inserthead(head,8);
	inserthead(head,2);
	inserthead(head,1);

	print(head);
	
	//cout<<"after reverse"<<endl;
	//reverse(head);
	print(head);
	cout<<"even number"<<endl;
	is_even(head);
	
}
