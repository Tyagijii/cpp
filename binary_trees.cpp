#include<iostream>

using namespace std;

struct node
{
	node *left;
	node *right;
	int info;
};
node *root;

node *insert(node *p,int n)
{
	node *ptr;
	ptr=new node;
	ptr->left=NULL;
	ptr->right=NULL;
	ptr->info=n;
	if (ptr==NULL)
	{
		cout<<"No space";
	}
	else
	{
		if (p==NULL)
		{
//			cout<<21;
			p=ptr;//ptr->info;
//			cout<<p->info;
		}
		else if (ptr->info<p->info)
		{
			cout<<22;
//			root->left=
			insert(p->left,n);
		}
		else
		{
			cout<<23;
//			root->right=
			insert(p->right,n);
		}
	}
}

int main()
{
//	cout<<3;
	insert(root,4);
//	cout<<2;
	cout<<root->info;
//	insert(root,3);
//	insert(root,2);
//	cout<<root->info<<" "<<root->left->info<<" "<<root->left->left->info;
}
