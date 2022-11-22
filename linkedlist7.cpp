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
void inserttail(node* &tail,int x)
{
	node* newnode = new node(x);
	tail->add=newnode;
	tail=newnode;
}
void insertmid(node* head,int post,int x)
{ 
    node* prev=head;
    for(int i=1;i<post;i++)
    {
    	prev=prev->add;
	}
	node* newnode=new node(x);
    newnode->add=prev->add;
    prev->add=newnode;
	
}
void print(node* head)
{
	while(head!= NULL)
	{
		cout<<head->data<<endl;
		head=head->add;
	}
}
int main()
{    
    node* node1= new node(10);
    node* head= node1;
    node* tail=node1;
    int ch;
    while(true)
    {
	cout<<" 1 for inserthead \n 2 for insert tail \n 3 for mid \n 4 for print \n 5 for exit"<<endl;
    cin>>ch;
    switch(ch)
    {
	case 1:
    	int x;
    	cout<<"enter the data :"<<endl;
    	cin>>x;
    	inserthead(head,x);
    	break;
    case 2:
    	int y;
    	cout<<"enter the data :"<<endl;
    	cin>>y;
    	inserttail(tail,y); break;
    case 3:
	    int z,post;
	    cout<<"enter the data and position :"<<endl;
	    cin>>z>>post;
	    
	    insertmid(head,post,z); break;
	case 4:
	     print(head);  break;
	case 5:
	     exit(0);	     break;
    }}
}

