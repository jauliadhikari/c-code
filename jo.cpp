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
	
	cout<<"enter data for left side of root"<<d<<endl;
	root->left=buildtree(root->left);
	
	cout<<"enter data for right side of root"<<d<<endl;
	root->right=buildtree(root->right);
	
	return root;
	
}
vector < vector <int> >adbfs(node* root)
{
	vector <vector <int> > ans;
	queue <node*> q;
	
	q.push(root);
	while(true)
	{
	
		int sizee=q.size();
	    vector <int> data;
		if(sizee==0)
		{
			return ans;
		}
		while(sizee>0)
		{	
		  node* temp=q.front();
		  q.pop();
		  
		  data.push_back(temp->data);
		  
		  if(temp->left!=NULL)
		  {
		  	q.push(temp->left);
		  }
		   if(temp->right!=NULL)
		  {
		  	q.push(temp->right);
		  }
		  sizee--;
		} 
		ans.push_back(data);
	}
	return ans;
}
void left(node* root,vector <int> &ans)
{
	if(root==NULL)
	{
		return;
	}
	
	if(root->left == NULL && root->right == NULL)
	{
		return;
	}
	
	if(root->left!=NULL )
	{
		left(root->left,ans);
	}
	else
	{
		left(root->right,)ans;
	}
	ans.push_back(root->data);
}

void right(node* root,vector <int> &ans)
{
	if(root==NULL)
	{
		return;
	}
	
	if(root->left == NULL && root->right == NULL)
	{
		return;
	}
	
	if(root->right !=NULL)
	{
		right(root->right,ans);
	}
	else
	{
		right(root->left,ans);
	}
	
	ans.push_back(root->data);
}






