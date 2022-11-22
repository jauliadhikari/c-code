#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node* next;	
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
int main()
{
   node* node1=new node(10);
   node* head= node1;
   cout<<node1->data<<endl;
   cout<<node1->next<<endl;
   
}
