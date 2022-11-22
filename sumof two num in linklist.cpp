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
		cout<<head->data;
		head=head->add;
	}
	cout<<endl;
}
void print_sum(int arr1[],int s1,int arr2[], int s2)
{
	int num1=0,num2=0;
	for(int i=0;i<s1;i++)
	{
		num1 = (num1*10)+arr1[i];
	}
	for(int i=0;i<s2;i++)
	{
		num2 = (num2*10)+arr2[i];
	}
	cout<<num1+num2<<endl;
}
void add_sum(node* head1,node* head2)
{
	int arr1[100],arr2[100];
	
	int s1=0,s2=0;
	int i=0,j=0;
	while(head1!=NULL)
	{
		arr1[i++]=head1->data;
		head1 = head1->add;
		s1++;
	}
	while(head2!=NULL)
	{
		arr2[j++]=head2->data;
		head2=head2->add;
		s2++;
	}
	print_sum(arr1,s1,arr2,s2);
	
	
}
int main()
{
	node* node1=new node(1);
	node* head1=node1;
	inserthead(head1,2);
	inserthead(head1,3);

	node* node2=new node(4);
	node* head2=node2;
	inserthead(head2,5);
	inserthead(head2,6);
	
	print(head1);
	print(head2);
	
	add_sum(head1,head2);
	
}
