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
	node* newnode = new node(x);
	newnode->add=head;
	head = newnode;
}
int main()
{
	node* node1 = new node(10);
	
	
}
