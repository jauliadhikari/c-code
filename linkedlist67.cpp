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
			add= NULL;
		}
		~node()
		{
		   cout<<"destroyed"<<endl;
		}
	
};
void inserthead(node* &head,int x)
{
	node* newnode=new node(x);
	newnode->add=head;
	head=newnode;
}
void inserttail(node* &tail,int x)
{
	node* newnode=new node(x);
	tail->add=newnode;
	tail=newnode;
}
void mid(node* head,int post,int x)
{   node* prev=head;
    node* newnode=new node(x);
	for(int i=0;i<post;i++)
	{
		prev=prev->add;
	}
	newnode->add=prev->add;
	prev->add=newnode;
}
void del(node* head, int post)
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
void print(node* head)
{   while(head!=NULL)
    {
	cout<<head->data<<endl;
	head=head->add;
    }
}
int main()
{
	node* node1= new node(10);
	node* head=node1;
	node* tail=node1;
	int x,ch,post;
	while(true)
	{
	cout<<"1 for insert head \n 2 for insert tail \n 3 for insert mid \n 4 for del \n 5 for print \n 6 for exit"<<endl;
    cin>>ch;
	switch (ch)
	{
		case 1:
			
			cin>>x;
			inserthead(head,x);
			break;
		case 2:
			cin>>x;
			inserttail(tail,x);	
			break;
		case 3:
			cout<<"enter the data : "<<endl;
			cin>>x;
			cout<<"enter the position : "<<endl;
			cin>>post;
			mid(head,post,x);	
			break;
		case 4:
		    cout<<"enter the position : "<<endl;
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
		    cout<<"no such input"<<endl;		
		    break;
		    
		    	
}
}
}


