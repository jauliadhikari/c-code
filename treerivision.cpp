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
	
	cout<<"enter data for left side of"<<x<<endl;
	root->left=buildtree(root->left);
	
	cout<<"enter data for right side of"<<x<<endl;
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
void preorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	
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
	
	cout<<root->data<<" ";
	
}


void inorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	
	inorder(root->left);
	
	cout<<root->data<<" ";
	
	inorder(root->right);
}
int summ(node* root)
{
    int ans=0;
	if(root==NULL)
	{
		return ans;
	}
	ans=root->data;
	int x=summ(root->left);
	int y=summ(root->right);
	
	return ans+x+y;	
}	
int min(node* root)
{
	if(root==NULL)
	{
		return INT_MAX ;
	}
	
	int rd=root->data;
	int ls=min(root->left);
	int rs=min(root->right);
	
	if(ls<=rs && ls<=rd)
	{
		return ls;
	}
	
	if(rs<=ls && rs<=rd)
	{
		return rs;
	}
	
	if(rd<=ls && rd<=rs)
	{
		return rd;
	}
	
}
int max(node* root)
{
	if(root==NULL)
	{
		return INT_MIN ;
	}
	
	int rd=root->data;
	int ls=max(root->left);
	int rs=max(root->right);
	
	if(rs>=ls && rs>=rd)
	{
		return rs;
	}
	
	if(ls>=rs && ls>=rd)
	{
		return ls;
	}
	
	if(rd>=ls && rd>=rs)
	{
		return rd;
	}
	
}

int height(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	int lh=height(root->left);
	
	int rh=height(root->right);
	
	return max(lh,rh)+1;
	
}


bool is_bal(node* root)
{
	if(root==NULL)
	{
		return true;
	}
	
	bool left=is_bal(root->left);
	
	bool right=is_bal(root->right);
	
	bool diff=abs(height(root->left)-height(root->right)<=1);
	
	
	if(left && right && diff==true)
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
	vector <int> ans;
	
	/*bfs(root,ans);
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
	}*/
	
	preorder(root);
	postorder(root);
	inorder(root);
	
	cout<<"sum"<<endl;
	
	cout<<summ(root)<<endl;
	
    cout<<min(root)<<endl;
    cout<<max(root)<<endl;
	
	if(is_bal(root)==true)
	{
		cout<<"bal"<<endl;
	}
	else
	{
		cout<<"not bal"<<endl;
	}
}
