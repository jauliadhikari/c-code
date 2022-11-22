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

int sum(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	int left=sum(root->left);
	int right=sum(root->right);
	
    int ans=root->data+ left + right;
	
	return ans;
}
bool sum_check(node* root)
{
	
	if(root==NULL)
	{
		return true;
	}
	
	
	bool left = sum_check(root->left);
	
	bool right= sum_check(root->right);
	
	bool curr = root->data == sum(root->left) + sum(root->right) ;
	
	
	
	if(root->left ==NULL && root->right ==NULL)
	{
		curr=true;
	}
	
	
	if(curr && left && right)
	{
		//cout<<"yes i m sum of left and right"<<endl;
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
	
   if( sum_check(root)==true)
   {
   	cout<<"yes i m sum of left and right"<<endl;
   }
   else
   {
   	cout<<"no sum "<<endl;
   }
	

}
