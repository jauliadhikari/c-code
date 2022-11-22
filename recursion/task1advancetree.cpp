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
	cout<<"enter data of root"<<endl;
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
vector <vector<int> > adbfs(node* root)
{
    vector<vector<int> >ans;
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
int height(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	int left=height(root->left);
	
	int right=height(root->right);
	
	int hh=max(left,right)+1;
	
	return hh;	
}
bool is_bal(node* root)
{
	if(root==NULL)
	{
		return true;
	}
	
	if(root->left ==NULL && root->right ==NULL)
	{
		return true;
	}
	
	bool left=is_bal(root->left);
	
	bool right=is_bal(root->right);
	
	
	bool curr= abs(height(root->left)-height(root->right)) >=1;
	
	
	if(left && right && curr)
	{
		return true;
	}
	else
	{
		return false;
	}
} 
int summ(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	int l=summ(root->left);
	int r=summ(root->right);
	
	int ans=root->data+l+r;
	
	return ans;
	
	
}
bool is_sum(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	
	bool sleft=is_sum(root->left);
	
	bool sright=is_sum(root->right);
	
	bool scurr =root->data ==summ(root->left)+summ(root->right);
	
	if(sleft && sright && scurr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	node* root=NULL;
	root=buildtree(root);
	
	vector <vector <int> > ans;
	
	ans=adbfs(root);
	
	for(int i=0;i<ans.size();i++)
	{
		print(ans[i]);
		cout<<endl;
	}
	
	
   if(is_bal(root))
   {
   	cout<<"is bal"<<endl;
   }
   else
   {
   	cout<<"not bal"<<endl;
   }
   
   cout<<"sum of nodes "<<summ(root)<<endl;
   
   if(is_sum(root))
   {
   	cout<<"is sum"<<endl;
   }
   else
   {
   	cout<<"not sum"<<endl;
   }
   
   
   
}
