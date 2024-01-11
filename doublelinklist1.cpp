#include<iostream>

using namespace std;

struct node
{
	node *prev;
	int info;
	node *next;
};
node *start;
node *end;

void insert(int n)
{
	node *ptr;
	ptr = new node;
	ptr->info=n;
	ptr->prev=NULL;
	ptr->next=NULL;
	if (ptr==NULL)
	{
		cout<<"No element ";
	}
	else
	{
		if (start==NULL)
		{
			start=ptr;
			end=ptr;
		}
		else
		{
			start->prev=ptr;
			ptr->next=start;
			start=ptr;
		}
	}
}

void show()
{
	node *p;
	if (start==NULL)
	{
		cout<<"No element";
	}
	else
	{
		for (p=start;p!=NULL;p=p->next)
		{
			cout<<p->info<<endl;
		}
	}
}

void remfirst()
{
	node *ptr;
	if (start==NULL)
	{
		cout<<"No element";
	}
	else
	{
		ptr=start;
		if (end==start)
		{
			end=NULL;
			start=NULL;
		}
		else
		{
			start->next->prev==NULL;
			start=start->next;
		}
//		delete(ptr);
	}
}

int main()
{
	show();
	insert(7);
	show();
	insert(8);
	remfirst();
	insert(9);
	show();
}
