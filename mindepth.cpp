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

int min_dep(node* root)
{
	
	if(root==NULL)
	{
		return 0;
	}
	if(root->left && root->right)
	{
		return 1;
	}
	if(root->left== NULL)
	{
		return 1+min_dep(root->right);
	}
	
	if(root->right== NULL)
	{
		return 1+min_dep(root->left);
	}
	
	int ls=min_dep(root->left);
	
	int rs=min_dep(root->right);
	
	int curr = 1+ min(ls , rs);
	
	return curr;
	
}

int main()
{
	node* root=NULL;
	
	root=buildtree(root);
	
	
    cout<<min_dep(root);
	
}

