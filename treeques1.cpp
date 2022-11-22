#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* left;
		node*  right;
		node(int x)
		{
			data=x;
			left=NULL;
			right=NULL;
		}
};
node* buildtree(node* root)
{
	int i;
	cout<<"enter the value of root"<<endl;
	cin>>i;
	root=new node(i);
	
	
	if(i==-1)
	{
		return NULL;
	}
	
	cout<<"enter value for left side of"<<i<<endl;
	root->left=buildtree(root->left);
	
	cout<<"enter value for right side of"<<i<<endl;
	root->right=buildtree(root->right);
	
	return root;	

}

void bfs(node* root,vector <int> &v)
{   //this
	
	queue <node*> q;
	q.push(root);
	
	bool ltr=false;
	
	
	
	while(q.empty()!=true)
	{
		node* temp=q.front();
		q.pop();
		
		v.push_back(temp->data);
		if(ltr == true)
		{
		if(temp->left!=NULL)
		{
		  q.push(temp->left);
	    }
		
		if(temp->right!=NULL)
		{
		   q.push(temp->right);
	    }
		ltr == false;
		}
	    
	    if(ltr == false)
	    {
	    
		if(temp->right!=NULL)
		{
		   q.push(temp->right);
	    }
	    if(temp->left!=NULL)
		{
		  q.push(temp->left);
	    }
		
		ltr == true;
	    	
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
