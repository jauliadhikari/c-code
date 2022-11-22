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
node* buildtree( node* root)
{
	
	int i;
	cout<<"enter data of root"<<endl;
	cin>>i;
	root=new node(i);

	
	if(i==-1)
	{
		return NULL;
	}
	
	cout<<"enter data for left side"<<i<<endl;
	root->left=buildtree(root->left);
	
	
	cout<<"enter data for right side"<<i<<endl;
	root->right=buildtree(root->right);
	
	
}
void bfs(node* root,vector<int> ans)
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
int main()
{
	node* root=NULL;
	
	
	root=buildtree(root);
}

