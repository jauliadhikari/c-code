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
node* buildtree(node* root1)
{
	int i;
	cout<<"enter data for root"<<endl;
	cin>>i;
	
	root1=new node(i);
	
	if(i==-1)
	{
		return NULL;
	}
	
	cout<<"enter data for left side"<<i<<endl;
	root1->left=buildtree(root1->left);
	
	cout<<"enter data for right side"<<i<<endl;
	root1->right=buildtree(root1->right);
	
	return root1;
}
bool is_identical(node* r1,node* r2)
{
	
	if( (r1 && r2) == NULL)
	{                              
		return true;
	}
	
	if(r1 !=NULL && r2==NULL)
	{
		return false;
	}
	
	if(r2 !=NULL && r1==NULL)
	{
		return false;
    }
    
    
    bool lans=is_identical(r1->left,r2->left);
    
    bool rans=is_identical(r1->right,r2->right);
    
    bool mainroot= r1->data == r2->data;
    
    if(lans && rans && mainroot)
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
