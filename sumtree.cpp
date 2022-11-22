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
int summ(node* root)
{
	static int ans=0;
	if(root==NULL)
	{
		return 0;
	}
	
	int temp=root->data;
	ans = ans +  temp;
	
	summ(root->left);
	summ(root->right);
	
	
	return ans;
	
	
	
}
int main()
{
	node* root=NULL;
	
	root=buildtree(root);
	
	vector <int> ans;
	
	bfs(root,ans);
	
	cout<<summ(root);
	
}
