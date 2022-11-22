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
   node* newnode= new node(x);
   newnode->add=head;
   head=newnode;   
}
void inserttail(node* &tail,int x)
{
	node* newnode= new node(x);
	newnode=tail->add;
	tail=newnode;
}
void insertmid(int post,node* head,int x)
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
  while(head!=NULL)
  {
  	cout<<"data"<<head->data<<endl;
  	cout<<" address"<<head->add<<endl;
  	head=head->add;
   }
}
int main()
{
	node* newnode=new node(10);
	node* head=newnode;
	node* tail=newnode;
	int x;
	while(true)
	{ int ch;
	 cout<<" 1 for insert at head \n 2 for insert at tail \n 3 for insert at mid \n 4 for print \n 5 for exit."<<endl;
	 cin>>ch;
	 switch(ch)
	 	{
	 	case 1:
	 		cout<<"enter th data"<<endl;
	 		cin>>x;
	 		inserthead(head,x);
	 		break;
	 	case 2:
		    cout<<" enter data"	<<endl;
		    cin>>x;
		    inserttail(tail,x);
		    break;
		case 3:
		    cout<<"enter data"<<endl;
		    cin>>x;
		    int position;
		    cout<<" position"<<endl;
		    cin>>position;
		    insertmid(position,head,x);
			break;
		case 4:
		    print(head);
		    break;
		case 5:
		    exit(0); 
			break;   
	    } 
    }
}
