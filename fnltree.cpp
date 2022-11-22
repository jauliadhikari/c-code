#include<bits/stdc++.h>
using namespace std;
class nodell
{
	public:
		int data;
		nodell* add;
		nodell(int x)
		{
			data=x;
			add=NULL;
		}
};
void insertail(nodell* &tail,int x)
{
	nodell* newnode=new nodell(x);
	tail->add=newnode;
	tail=newnode;
}

class node
{
	public:
		int data;
		node* left;
		node* right;
		node(int x)
		{
			data=x;
			left=NULL;
			right=NULL;
		}
};
node* buildtree(node* root)
{
	
	int d;
	cout<<"enter data for root"<<endl;
	cin>>d;
	
	root=new node(d);
	
	if(d==-1)
	{
		return NULL;
	}
	
	
	cout<<"enter data for left side"<<d<<endl;
	root->left=buildtree(root->left);
	
	
	cout<<"enter data for right side"<<d<<endl;
	root->right=buildtree(root->right);
	
	return root;
	
}
void preorder(node* root,vector <int> &v)
{
	if(root==NULL)
	{
		return;
	}
	
	v.push_back(root->data);
	
    preorder(root->left,v);
    
    preorder(root->right,v);
	
}
nodell* flat(node* root)
{
	vector <int> v;
	
	preorder(root,v);
	
	nodell* node1= new nodell(v[0]);
	nodell* head=node1;
	nodell* tail=node1;
	
	for(int i=1;i<v.size();i++)
	{
		insertail(tail,v[i]);
	}
	
	return head;
	
}
void print(nodell* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<endl;
		head=head->add;
	}
}
int main()
{
	node* root = NULL;
	
	root=buildtree(root);
	
	nodell* head=flat(root);
	
	print(head);
}
