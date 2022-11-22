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
		~node()
		{
			cout<<"node crushed : "<<endl;
		}
};
void inserthead(node* &head,int x)
{
	node* newnode= new node(x);
	newnode->add=head;
	head=newnode;
}
void insertail(node* &tail,int x)
{
	node* newnode= new node(x);
	tail->add=newnode;
	tail=newnode;
}
void print(node* head)
{   
    while(head!=NULL)
    {
    	cout<<"Data = ";
		cout<<head->data<<endl;
		head=head->add;
    }
}
void del(node* head,int post)
{
	node* prev=head;
	for(int i=1;i<post-1;i++)
	{
		prev=prev->add;
	}
	node* current=prev->add;
	prev->add=current->add;
	delete current;
}
int search(node* head,int key)
{
	int post = 1;
	while(head!=NULL)
	{
		if(head->data==key)
		{
			return post;
		}
		post++;
		
		head = head->add;
	}
	return -1;
}                                                                                                       
int main()
{
	node* node1=new node(5);
	node* head=node1;
	node* tail=node1;
	while(head!=NULL)
	{
	cout<<" 1 for inserthead \n 2 for inserttail \n 3 for print  \n 4 for del \n 5. for exit "<<endl;
	int ch;
	cin>>ch;
	switch (ch)
	{
		case 1:
			int x;
			cout<<"Enter the value that you want to insert : ";
			cin>>x;
			inserthead(head,x);
			break;
		case 2:
			int y;
			cout<<"Enter the value that you want to insert : ";
			cin>>y;
			insertail(tail,y);
			break;
		case 3:
			cout<<"Printin the data :"<<endl;
			print(head);
			break;
		case 4:
			int post;
			cout<<"enter the postion that you want to delete : ";
			cin>>post;
			del(head,post);
			break;
		case 5:
			exit(0);
			break;
		case 6:
			int key;
			cout<<"enter the value that you want to search in the linked list :";
			cin>>key;
			cout<<"position of the key is "<<search(head,key)<<endl;
			break;
		default:
			cout<<"no such key"<<endl;
			break;
		}
	}
}




