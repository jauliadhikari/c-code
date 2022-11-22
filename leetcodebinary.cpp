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

void bfs(node* root,vector <int> &v)
{
	queue <node*> q;
	q.push(root);
	
	
	while(q.empty()!= true)
	{
		node* temp = q.front();
	    q.pop();
	    
	    v.push_back(temp->data);
	    
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
		cout<<v[i]<<" ";
	}
	
}

