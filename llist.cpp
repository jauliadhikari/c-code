#include<iostream>
using namespace std;
class node
{  public:
   int data;
   node* next;
   node(int x)
   {
   	data=10;
   	next=NULL;
   }
};
int main()
{   
    node* node1= new node(10);
	node* head= node1;
	cout<<" data"<<node1->data;
	cout<<" address of first "<<node1->next;
}
