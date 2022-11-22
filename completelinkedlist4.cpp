#include<iostream>
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
		~node()
		{
			cout<<"node cruhsed :"<<endl;
		}
};
void inserthead(node* &head,int x)
{
	node* newnode = new node(x);
	newnode->add=head;
	head = newnode;
}
void inserttail (node* &tail,int x)
{
	node* newnode = new node(x);
	tail->add = newnode;
	tail = newnode;
}
void insertmid(node* head,int post,int x)
{
	node* prev = head;
	for(int i =1;i<post-1;i++)
	{
		prev = prev->add;
	}
	
	node* newnode = new node(x);
	newnode->add = prev->add;
	prev->add= newnode;
	
}

void print (node* head)
{
	while(head!=NULL)
	{
		cout<<"data = :  "<<head->data<<endl;
		head = head->add;
	}
}
void del(node* head,int post)
{
	node* prev = head;
	
	for(int i =1;i<post-1;i++)
	{
		prev = prev->add;
	}
	node* cur = prev->add;
	
	prev->add = cur->add;
	delete cur;
}
int main()
{
	int x,post;
	node* node1 = new node(1);
	
	node* head = node1;
	
	node* tail = node1;
	int ch;
	while(true)
	{
	cout<<"enter your choice : \n 1. for insert at head:  \n 2: for insert at tail:  \n 3: for insert at mid: \n 4: Delete the node \n 5: print the node : \n 6: for exit"<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			cout<<"enter the data of the node: "<<endl;
			cin>>x;
			inserthead(head,x);
			break;
		case 2:
			cout<<"entre the data of the node : "<<endl;
			cin>>x;
			inserttail(tail,x);
			break;
		case 3:
			cout<<"enter the data of the node :"<<endl;
			cin>>x;
			cout<<"enter the position of the node :"<<endl;
			cin>>post;
			insertmid(head,post,x);
			break;
		case 4:
			cout<<"enter the position of the node that you delete  "<<endl;
			cin>>post;
			del(head,post);
			break;
		case 5: 
			print(head);
			break;
		case 6:
			exit(0);
			break;
		default:
			cout<<"no such option available :"<<endl;
			break;
	
	}
}
}
