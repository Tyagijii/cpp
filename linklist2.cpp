#include<iostream>

using namespace std;

struct node
{
	int info;
	node *next;
};
node *start;

void insert(int n)
{
	node *p;
	p=new node;
	p->info=n;
	p->next=NULL;
	if (p==NULL)
	{
		cout<<"NO space";
	}
	else 
	{
		p->next=start;
		start=p;
	}
}

void insertmid(int n,int index)
{
	node *p;
	p=new node;
	p->info=n;
	p->next=NULL;
	if (p==NULL)
	{
		cout<<"NO space";
	}
	else
	{
		for (int i=0;i<=inde)
	}
}



void show()
{
	node *p;
	if (start==NULL)
	{
		cout<<"NO element";
	}
	else
	{
		for (p=start;p!=NULL;p=p->next)
		{
			cout<<p->info<<" ";
		}
	}
}

void remfromlast()
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
			if (p->next->next==NULL)
			{
				p->next=NULL;
			}
		}
	}
}



void arrtolist()
{
	node *p;
	int arr[1000];
	int i=1;	
	if (start==NULL)
	{
		cout<<"NO element to convert";
	}
	else
	{
		for (p=start;p!=NULL;p=p->next)
		{
			arr[i]=p->info;
			cout<<i<<" "<<arr[i]<<" ";
			i++;
		}
	}
}

int main()
{
	insert(7);
	insert(3);
	show();
	arrtolist();
	remfromlast();
	show();
}
