#include<iostream>
using namespace std;
class node
{   
    public:
    int data;
	node* next;
    int head;
    node(int x)
    {
      data=x;
      next=NULL;
	}
};
int main()
{
	node* node1= new node(10);
	node* head=node1;
	cout<<" data"<<node1->data<<endl;
	cout<<"address of 1   "<<node1->next;
}
