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
void preorder(node* root,vector <int> &ans)
{
	
	if(root==NULL)
	{
		return;
	}
	
	ans.push_back(root->data);
	
    preorder(root->right,ans);
}

int main()
{
	node* root=NULL;
	root=buildtree(root);
	vector <int> ans;
	preorder(root,ans);
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
	}
}
