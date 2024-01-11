#include<iostream>

using namespace std;

struct node
{
	int info;
	node *left;
	node *right;
};
node *root;

node *insert(node *root,int n)
{
	node *ptr;
	ptr=new node;
	ptr->info=n;
	ptr->left=NULL;
	ptr->right=NULL;
	if (ptr==NULL)
	{
		cout<<"No space";
	}
	else
	{
		if (root==NULL)
		{
			root=ptr;
		}
		else
		{
			if (ptr->info>root->info)
			{
				root->right=insert(root->right,n);
			}
			else
			{
				root->left=insert(root->left,n);
			}
		}
	}
	return root;
}


void inorder(node *root)
{
	if (root==NULL)
	{
		return;
	}
	else
	{
		inorder(root->left);
		cout<<root->info<<" ";
		inorder(root->right);
	}
}



int main()
{
	root=insert(root,8);
	root=insert(root,9);
	root=insert(root,10);
	root=insert(root,14);
	root=insert(root,13);
	root=insert(root,1200);
	root=insert(root,12);
	root=insert(root,5);
	inorder(root);
//	cout<<root->info<<" "<<root->right->info<<" "<<root->right->right->info;
}
