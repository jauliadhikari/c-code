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
	cout<<"enter data for root"<<endl;
	cin>>d;
	root=new node(d);
	
	if(d==-1)
	{
		return NULL;
	}
	
	cout<<"enter data for left of root"<<d<<endl;
	root->left=buildtree(root->left);
	
	
	
	cout<<"enter data for right of root"<<d<<endl;
	root->right=buildtree(root->right);
	
	return root;
	
}
void bfs(node* root,vector <int> &ans)
{
	
	queue <node*> q;
	q.push(root);
	
	while(q.empty()!=true)
	{
		node* temp=q.front();
		q.pop();
		
		ans.push_back(temp->data);
		
		if(temp->left!=NULL)
		{
			q.push(temp->left);
		}
		if(temp->right!=NULL)
		{
			q.push(temp->right);
		}
	}	
}
void preorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	
	cout<<root->data<<endl;
	
	preorder(root->left);
	
	preorder(root->right);
}

void postorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	
	postorder(root->left);
	
	postorder(root->right);
	cout<<root->data<<endl;
}

void inorder(node* root)
{
	if(root==NULL)
	{
		return ;
	}
	inorder(root->left);
		
	cout<<root->data<<" ";
	
    inorder(root->right);

}
int main()
{
	node* root=NULL;
	root=buildtree(root);
	
	vector<int> ans;
	
	bfs(root,ans);
	
    cout<<"pre order"<<" ";
	preorder(root);
    
    cout<<"post order"<<" ";
	postorder(root);
    cout<<"in order"<<"  ";
	inorder(root);
	
}
