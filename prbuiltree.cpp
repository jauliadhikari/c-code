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
int sum(node* root)
{
	
	if(root==NULL)
	{
		return 0;
	}
	
    int	ans=root->data + sum(root->left) + sum(root->right);
	
	return ans;
}
int maxi(node* root)
{
	if(root==NULL)
	{
		return INT_MIN;
	}
	
	int ls=maxi(root->left);
	
	int rs=maxi(root->right);
	
	int mainr=root->data;
	
	if(ls>rs && ls>mainr)
	{
		return ls;
	}
	if(rs>ls && rs>mainr)
	{
		return rs;
	}
	if( mainr>rs && ls<mainr)
	{
		return mainr;
	}
	
}
int min(node* root)
{
	if(root==NULL)
	{
		return INT_MAX;
	}
	
	int ls=min(root->left);
	
	int rs=min(root->right);
	
	int mainr=root->data;
	
	if(ls<rs && ls<mainr)
	{
		return ls;
	}
	if(rs<ls && rs<mainr)
	{
		return rs;
	}
	if( mainr<rs && ls>mainr)
	{
		return mainr;
	}
	
}
int height(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	int ls=height(root->left);
	int rs=height(root->right);
	
	int hh=max(ls,rs)+1;
	
	return hh;
}

bool is_bal(node* root)
{
	
	if(root==NULL)
	{
		return true;
	}
	
	bool ls=is_bal(root->left);
	
	bool rs=is_bal(root->right);
	
	bool curr = abs(height(root->left)-height(root->right)) <=1;
	
	if((ls && rs && curr))
	{
		return true;
	}
	else
	{
		return false;
	}	
}
void inorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	
	inorder(root->left);
	
	cout<<root->data<<endl;
	
	inorder(root->right);
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
bool check_sum(node* root)
{
	
	if(root==NULL)
	{
		return true;
	}
	
	bool ls=check_sum(root->left);
	
	bool rs=check_sum(root->right);
	
	bool curr = root->data == sum(root->left)+sum(root->right);
	
	if(root->left==NULL && root->right== NULL)
	{
		curr=true;
	}
	
	
	if(ls && rs && curr)
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
	vector <int> v;
	bfs(root,v);
	
	cout<<"bfs traversal"<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	cout<<"sum"<<" "<<sum(root)<<endl;
	cout<<"maximum"<<" "<<maxi(root)<<endl;
	cout<<"mini"<<min(root)<<endl;
	cout<<"height"<<height(root)<<endl;
	
	cout<<"balance or not  "<<is_bal(root)<<endl;
	
	
	if(check_sum(root)==true)
	{
		cout<<"sum is addition of left and right"<<endl;
	}
	else
	{
		cout<<"not"<<endl;
	}
}
