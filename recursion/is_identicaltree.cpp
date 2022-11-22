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

bool is_identical(node* r1,node* r2)
{
	
	if(r1==NULL  &&  r2 ==NULL)
	{
		return true;
	}
	
	bool l=is_identical(r1->left,r2->left);
	
	
	bool r=is_identical(r1->right,r2->right);
	
	bool curr = r1->data == r2->data;
	
	if(l && r && curr)
	{
		return true;
	}
	else
	{
		false;
	}
	
	
}
int main()
{
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




