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
vector<vector <int> > adbfs(node* root)
{
	vector <vector<int> > ans;
	queue <node*> q;
	q.push(root);
	
	while(true)
	{
	   vector <int> data;
	   int size=q.size();
	   if(size==0)
	    {
		return ans;
	    }
	
	
		while(size>0)
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
			size--;
		}
		
		ans.push_back(data);
	}
	return ans;	
}
void print(vector <int> data)
{
	for(int i=0;i<data.size();i++)
	{
		cout<<data[i]<<" ";
	}
}

int main()
{
	node* root=NULL;
	root=buildtree(root);
	
	vector <int> v;
	bfs(root,v);
	vector <vector <int> >ans;
	ans=adbfs(root);
	
	for(int i=0;i<ans.size();i++)
	{
		print(ans[i]);
		cout<<endl;
	}
}
