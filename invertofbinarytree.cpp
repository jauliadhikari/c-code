void invert(node* &root)
{
	stack<node*> st;	
	st.push(root);

	while(st.empty()!=true)
	{
		node* temp = st.top();
		st.pop();
		
		if(temp!=NULL)
		{
			st.push(temp->left);
			st.push(temp->right);
			swap(temp->left,temp->right);
		}
	}
}
