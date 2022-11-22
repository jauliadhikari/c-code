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
	head=newnode;
}
void print(node* &head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->add;
	}
}
void reverse1(int arr[],int size)
{   int start=0;
    int end=size-1;
	while(start<=end)
	{
		swap(arr[start++],arr[end--]);
		
	}
}
bool reverse2(node* head)
{  
   int count=0;
   node* temp=head;
   while(temp!=NULL)
   {
   	count++;
   	temp=temp->add;
   }
   cout<<count<<endl;
   int arr1[count],arr2[count],i=0;
  
   while(head!=NULL)
   {  
      arr1[i]=head->data;
      arr2[i]=head->data;
      i++;
      head=head->add;
   }
    reverse1(arr1,count);
    
    for(int i=0;i<count;i++)
    {
    	if(arr1[i]!=arr2[i])
    	{
    		return false;
		}
	}return true;
}
int main()
{
	node* node1 = new node(1);
	node* head = node1;
	inserthead(head,1);
	inserthead(head,1);
	inserthead(head,1);
	inserthead(head,1);
	inserthead(head,1);
	inserthead(head,1);
	
	if(reverse2(head)==0)
	cout<<"not palindrome: "<<endl;
	else
	cout<<"palindrome :"<<endl;
}



