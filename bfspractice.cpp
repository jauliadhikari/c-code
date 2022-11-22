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
	int x;
	cout<<"enter data for root"<<endl;
	cin>>x;
	root=new node(x);
	
	if(x==-1)
	{
		return NULL;
	}
	
	cout<<"enter data for left side"<<x<<endl;
	root->left =buildtree(root->left);
	
	cout<<"enter data for right side"<<x<<endl;
	root->right =buildtree(root->right);
	
	return root;
}
void bfs(node* root,vector <int> &v)
{
	queue <node*> q;
	q.push(root);
	
	while(q.empty()!=true)
	{
		
	node* temp = q.front();
	
	q.pop();
	
	if(q.size()==0)
	{
		return;
	}
	
	v.push_back(temp->data);
	
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
	vector <int> v;
	
	bfs(root,v);
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	
}
