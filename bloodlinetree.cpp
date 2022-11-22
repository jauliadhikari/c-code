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
	int x;
	cin>>x;
	
	if(x==-1)
	{
		return NULL;
	}
	root=new node(x);
	
	cout<<"enter value for left part"<<x<<endl;
	root->left=buildtree(root->left);
	
	cout<<"enter value for left part"<<x<<endl;
	root->right=buildtree(root->right);
	
	return root;
}
vector<vector<int> > advbfs(node* root)
{
	vector<vector<int> > ans;
	queue<node*> q;
	q.push(root);
	
	while(true)
	{
		int sizee=q.size();
		vector<int> data;
	    if(sizee==0)
		{
			return ans;
		}
		while(sizee>0)
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
			sizee--;	
		}
		ans.push_back(data);
}
	return ans;
}
void solve(node* root,int len,int &maxlen,int sum,int &maxsum)
{
	
	if(root==NULL)
	{
		if(len>maxlen)
		{
			maxlen=len;
			maxsum=sum;
		}
		if(len==maxlen)
		{
			maxsum=max(sum,maxsum);
		}
		return;
	}
	
	sum=sum+root->data;
	
	solve(root->left,len+1,maxlen,sum,maxsum);
	
	solve(root->right,len+1,maxlen,sum,maxsum);	
}

int bloodline(node* root)
{
	int len=0;
	int maxlen=0;
	
	int sum=0;
	int maxsum=INT_MIN;
	
	solve(root,len,maxlen,sum,maxsum);
	
	return maxsum;
}



int main()
{
	node* root=NULL;
	root=buildtree(root);

	
	//vector< vector<int> > ans;
	
   //	ans=advbfs(root);
	
	
	cout<<bloodline(root);
	
	
}

