#include<bits/stdc++.h>
using namespace  std;
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
	
	cout<<"enter data for left node"<<d<<endl;
	root->left=buildtree(root->left);
	
	
	cout<<"enter data for right node"<<d<<endl;
	root->right=buildtree(root->right);
	
	return root;
}
void bfs(node* root,vector <int> &ans)
{
	
	queue < node* > q;
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
	
	vector <int> ans;
	
	bfs(root,ans);
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}
