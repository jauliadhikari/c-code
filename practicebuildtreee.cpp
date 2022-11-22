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
	cout<<" enter data for root "<<endl;
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
	
    return	root;
	
}


void bfs(node* root,vector <int> &v)
{
	
	queue <node*> q;
	q.push(root);
	
	if(root==NULL)
	{
		return ;
	}
	
	while(q.empty()!=true)
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
	}}
}

vector <vector <int> > advbfs(node* root)
{
	vector <vector <int> > ans;
	queue <node*> q;
	
	q.push(root);
	
	while(true)
	{  
	    int size=q.size();
	    vector<int> v;
	    
	    if(size==0)
	    {
	    	return ans;
		}
		
		while(size>0)
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
			size--;
			
		}ans.push_back(v);
	}	
	return ans;
}
void print(vector <int> v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
int min(node* root)
{
	if(root==NULL)
	{
		return INT_MAX;
	}
	
	int rootdata=root->data;
	int left=min(root->left);
	int right=min(root->right);
	
	
	if(rootdata < left && rootdata < right)
	{
		
		return rootdata;
	}
	
	if(rootdata > left && left < right)
	{
		return left;
	}
	
	
	if(right< left && rootdata > right)
	{
	
		return right;
	}
	
}
int maxi(node* root)
{
	if(root==NULL)
	{
		return INT_MIN;
	}
	
	int rootdata=root->data;
	int left=maxi(root->left);
	int right=maxi(root->right);
	
	
	if(rootdata > left && rootdata > right)
	{
		
		return rootdata;
	}
	
	if(rootdata < left && left > right)
	{
		return left;
	}
	
	
	if(right> left && rootdata < right)
	{
	
		return right;
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
	
	int ans=max(left,right)+1;
	
	return ans;		
}
int sum(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	int rt=root->data;
	int left=sum(root->left);
	int right=sum(root->right);
	
	int ans=rt+left+right;
	
	return ans;
}
 bool is_sum(node* root)
{
	
	if(root==NULL)
	{
		return true;
	}

	bool left=is_sum(root->left);
	
	bool right=is_sum(root->right);
	
	bool curr = root->data == sum(root->left) + sum(root->right);
	
	if(root->left==NULL && root->right==NULL )
	{
		curr=true;
	}
	
	if(curr && left &&right)
	{
		return true;
	}
	else
	{
		return false;
	}	
}
bool is_bal(node* root)
{
	if(root==NULL)
	{
		return true;
	}
	
	
	bool left=is_bal(root->left);
	bool right=is_bal(root->right);
	
	bool ans = abs(height(root->left)-height(root->right)) <=1;
	
	if(left && right && ans)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void preorder(node * root)
{
	if(root==NULL)
	{
		return;
	}

	cout<<root->data<<"  ";
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
bool is_identical(node* r1,node* r2)
{
	if(r1==NULL && r2==NULL)
	{
		return true;
	}
	if(r1!=NULL && r2==NULL)
	{
		return false;
	}
	
	if(r1==NULL && r2!=NULL)
	{
		return false;
	}
	
	bool left=is_identical(r1->left,r2->left);
	
	bool right=is_identical(r1->right,r2->right);
	
	
	bool rt=r1->data==r2->data;
	
	if(left && right && rt)
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
	vector<int> v;
	vector <vector <int> >ans;
	
	ans=advbfs(root);
	
	for(int i=0;i<ans.size();i++)
	{
	    print(ans[i]);
	    cout<<endl;
	}	
	
	cout<<"min is"<<min(root)<<endl;
	cout<<"max is"<<maxi(root)<<endl;
	cout<<"sum of nodes"<<sum(root)<<endl;
	
	cout<<"height is"<<height(root)<<endl;
	
	if(is_sum(root))
	{
		cout<<" root is sum of left and right"<<endl;
	}
	else
	{
		cout<<"not sum of left and right sub tree"<<endl;
	}
	
	
	
	
	if(is_bal(root))
	{
		cout<<" balance "<<endl;
	}
	else
	{
		cout<<"not balance"<<endl;
	}
	
	cout<<"pre order"<<endl;
	preorder(root);
	
	
	cout<<"post order"<<endl;
	postorder(root);
	
	cout<<"inorder"<<endl;
	inorder(root);
	
	node* r1=NULL;
	node* r2=NULL;
	
	r1=buildtree(r1);
    r2=buildtree(r2);
	
	
	if(is_identical(r1,r2))
	{
		cout<<"identical"<<endl;
	}
	else
	{
		cout<<"not identical"<<endl;
	}	
}
	


