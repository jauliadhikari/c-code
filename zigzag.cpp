#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		node* left;
		node* right;
		int data;
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
	if(x==-1)
	{
		return NULL;
	}
	root=new node(x);
	
	cout<<"enter data for left of"<<x<<endl;
	root->left=buildtree(root->left);
	
	
	cout<<"enter data for right of"<<x<<endl;
	root->right=buildtree(root->right);
	
	return root;
}

vector<vector <int> > bfs(node* root)
{
	vector<vector<int> > ans;
	
	queue<node*> q;
	
	q.push(root);
	
	while(1)
	{
		int size = q.size();
		vector<int> data;
		if(size==0)
			return ans;
		
		while(size>0)
		{
			node* temp = q.front();
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
		cout<<data[i];
	}
	cout<<endl;
}
int main()
{
	node* root=NULL;
	
	root=buildtree(root);
	
	vector<vector<int> > ans;
	
	ans=bfs(root);
	
	
	for(int i=0;i<ans.size();i++)
	{
		if(i%2!=0)
		{
			reverse(ans[i].begin(),ans[i].end());
		}
	}
	
	for(int i=0;i<ans.size();i++)
	{
		print(ans[i]);
	}
	
	
}
