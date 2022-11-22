#include<bits/stdc++.h>
using namespace std;
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
	int i;
	cout<<"enter data of root"<<endl;
	cin>>i;
	root = new node(i);
	
	if(i==-1)
	{
		return NULL;
	}
	
	cout<<"enter data for left side of "<<i<<" "<<endl;
	root->left=buildtree(root->left);
	
	cout<<"enter data for right side of "<<i<<" "<<endl;
	root->right=buildtree(root->right);
	
	return root;
}

int main()
{
	node* root=NULL;
	
	root = buildtree(root);
	
	
}
