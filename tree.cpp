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
    root = new node(d);
		
	if(d==-1)
	{
		return NULL;
	}
	
	cout<<"enter value for left side"<<d<<endl;
	root->left=buildtree(root->left);
	
	cout<<"enter value for right side"<<d<<endl;
	root->right=buildtree(root->right);
	
	return root;
	
}
int main()
{
	
	node* root=NULL;
	
	root=buildtree(root);
}
