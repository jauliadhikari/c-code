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
void res(int arr1[],int s1,int arr2[],int s2)
{
	int n1 =0;
	int n2 =0;
	for(int i=0;i<s1;i++);
	{
		n1 = (n1*10)+arr1[i];
	}
	for(int i=0;i<s2;i++);
	{
		n2 = (n2*10)+arr2[i];
	}
	
	cout<<n1+n2;
}
void sol(node* head1,node* head2)
{
	int arr1[100],arr2[100];
	
	int s1=0,s2=0;
	int i=0,j=0;
	while(head1!=NULL)
	{
		arr1[i]=head1->data;
		i++;
		s1++;
		head1 = head1->add;
	}
	while(head2!=NULL)
	{
		arr2[j]=head2->data;
		j++;
		s2++;
		head2=head2->add;
	}
	res(arr1,s1,arr2,s2);
	
	
}
int main()
{
	node* node1=new node(1);
	node* head1=node1;
	inserthead(head1,2);
	inserthead(head1,3);
	
	
	node* node2=new node(9);
	node* head2=node2;
	inserthead(head2,2);
	inserthead(head2,3);
	
	sol(head1,head2);
	
	
	
	
	
}



