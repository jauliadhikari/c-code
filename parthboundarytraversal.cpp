#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* left;
		node* right;
		
		node(int x)
		{
			data = x;
			left = NULL;
			right = NULL;
		}
};
node* buildtree(node* root)
{
	int temp;
	cout<<"enter the root data : "<<endl;
	cin>>temp;
	root = new node(temp);
	
	if(temp==-1)
	{
		return NULL;
	}
	
	cout<<"Enter the left data of : "<<temp<<endl;
	root->left = buildtree(root->left);
	cout<<"Enter the right data of : "<<temp<<endl;
	root->right = buildtree(root->right);
	
	return root;
}
void print(vector<int> v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
void left(node* root, vector<int> &ans)
{
	if(root==NULL)
	{
		return;
	}
	if(root->left ==NULL && root->right == NULL)
	{
		return;
	}
	
	ans.push_back(root->data);
	
	if(root->left!=NULL)
	{
		left(root->left,ans);
	}
	else
	{
		left(root->right,ans);
	}
	
}
void leaf(node* root,vector<int> &ans)
{
	if(root==NULL)
	{
		return;
	}
	if(root->left==NULL && root->right==NULL)
	{
		ans.push_back(root->data);
		return;
	}
	
	leaf(root->left,ans);
	leaf(root->right,ans);
}
void right(node* root,vector<int> &ans)
{
	if(root==NULL)
	{
		return;
	}
	
	if(root->right==NULL && root->left == NULL)
	{
		return;
	}
	
	if(root->right!=NULL)
	{
		right(root->right,ans);
	}
	else
	{
		right(root->left,ans);
	}
	
	ans.push_back(root->data);
	
	
}
void boudary(node* root)
{
	vector<int> ans;
	ans.push_back(root->data);
	// sare left
	left(root->left,ans);
	
	//leaft ka leaf
	leaf(root->left,ans);
	
	//right ka leaf
	leaf(root->right,ans);
	
	//sara right
	right(root->right,ans);
	
	print(ans);	
} 



int main()
{
	node* root = NULL;
	
	root = buildtree(root);	
	vector<vector<int> > ans;
	
	boudary(root);
	
	
	
}
