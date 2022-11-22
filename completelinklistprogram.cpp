#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node* add;
	node(int x)
	{
		data = x	;
		add = NULL;
	}	
	~node()
	{
		cout<<"node crushed bhai sahab "<<endl;
	}
};
void insertathead(node* &head,int x)
{
	node* newnode = new node(x);
	newnode->add=head;
	head = newnode; 
}
void inserttail(node* &tail,int x)
{
	node* newnode = new node(x);
	tail->add= newnode;
	tail = newnode;
}
void insertmid(node* &head,int post,int x)
{
	node* newnode = new node(x);
	
	node* prev = head;
	
	for(int i =1;i<=post-1;i++)
	{
		prev = prev->add;
	}
	newnode->add = prev->add;
	prev->add = newnode;
}
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<"data => "<<head->data<<endl;
		head = head->add;
	}
	
}
void del(node* &head,int post)
{
	node* prev = head;
	
	for(int i=1;i<=post-1;i++)
	{
		prev = prev->add;
	}
	
	node* current = prev->add;
	
	prev->add=current->add;
	
	delete current;
	
}
int main()
{
	node* node1 = new node(1);
	
	node* head = node1;
	node* tail = node1;
	int ch,x,post;
	
	while(true)
	{
		cout<<"enter the choice : \n 1. for insert at head \n 2. insert at tail \n 3. for insert at mid \n 4. print \n 5. delete a node \n 6. exit :"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			cout<<"enter the data :"<<endl;
			cin>>x;
			insertathead(head,x);
			break;
			case 2:
			cout<<"enter the data :"<<endl;
			cin>>x;
			inserttail(tail,x);
			break;
			case 3:
				cout<<"enter the data and then postion "<<endl;
				cin>>x>>post;
				insertmid(head,post,x);
				break;
			case 4:
				cout<<"printing the data :"<<endl;
				print(head);
				break;
			case 5:
				cout<<"enter the postion that you want to delete :"<<endl;
				cin>>post;
				del(head,post);
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
