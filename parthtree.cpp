#include<bits/stdc++.h>
using namespace std;
class node{
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
	cout<<"enter data"<<endl;
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
	
}
int min(node* root)
{
	if(root==NULL)
	{
		return INT_MAX;
	}
	
	int rd=root->data;
	int ls=min(root->left);
	int rs=min(root->right);
	
	
	if(ls<=rs && ls<=rd)
	{
		return ls;
	}
	
	if(rs<=ls && rs<=rd)
	{
		return rs;
	}
	
	if(rd<=rs && rd<=ls)
	{
		return rd;
	}
}
int max(node* root)
{
	if(root==NULL)
	{
		return INT_MIN;
	}
	
	int rd=root->data;
	int ls=max(root->left);
	int rs=max(root->right);
	
	
	if(ls>=rs && ls>=rd)
	{
		return ls;
	}
	
	if(rs>=ls && rs>=rd)
	{
		return rs;
	}
	
	if(rd>=rs && rd>=ls)
	{
		return rd;
	}
}
int height(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	int lh=height(root->left);
	
	int rh=height(root->right);
	
	return max(lh,rh)+1;
	
}
bool is_bal(node* root)
{
	
	if(root==NULL)
	{
		return true;
	}
	
	bool x=is_bal(root->left);
	
	bool y=is_bal(root->right);
	
    bool curr = abs(height(root->left) - height(root->right)) <=1;
    
    if(( x && y && curr) ==true)
    {
    	return true;
	}
    else
    {
    	return false;
	}
	
}


int main()
{
	node* root=NULL;
	
	root=buildtree(root);
	
	vector <int> ans;
	                                                                  )(
	cout<<"min"<<"---->"<<min(root)<<endl;;
	
	cout<<"max"<<"---->"<<max(root)<<endl;
	
	cout<<"height"<<"---->"<<height(root)<<endl;
	
	cout<<"balance (boolean)  ---->"<<is_bal(root);
}
