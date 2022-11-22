#include<bits/stdc++.h>
using namespace std;
class node
{   public:
	int data;
	node* add;
	
	node(int x)
	{
		data=x;
		add=NULL;
	}
	~node()
	{
		cout<<"node is destroyed"<<endl;
	}
};
void inserthead(node* &head,int x)
{
	node* newnode=new node(x);
	newnode->add=head;
	head=newnode;
}
void loop(node* &head)
{
node* temp = head;

temp->add->add->add = temp->add;

}
bool is_loop(node* &head)
{
	map<node*,bool> visit;
	node* temp=head;
	while(temp!=NULL)
	{
		if(visit[temp]==true)
		{
			return true;
		}
	
	visit[temp]=true;
	temp=temp->add;
    }
	return  false;
}
void print(node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->add;
	}
}

int main()
{
	node* node1=new node(10);
	node* head=node1;
	node* tail=node1;
	
	inserthead(head,20);
	inserthead(head,30);
	inserthead(head,40);
	inserthead(head,50);
	loop(head);
	
	//print(head);
	if(is_loop(head))
	{
		cout<<"present"<<endl;
	}	
	else
	{
		cout<<"not present";
	}
	
	
}


