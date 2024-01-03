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

void insertafter(int n,int e)
{
	node *p,*p1;
	p=new node;
	p->info=n;
	p->next=NULL;
	if (p==NULL)
	{
		cout<<"NO space";
	}
	else
	{
		for (p1=start;p1!=NULL;p1=p1->next)
		{
			if (p1->info==e)
			{
				p->next=p1->next;
				p1->next=p;
				return;
			}
		}
		cout<<"Element not found";
	}
}


void insertmid(int n,int index)
{
	node *p,*p1;
	p=new node;
	p->info=n;
	p->next=NULL;
	if (p==NULL)
	{
		cout<<"NO space";
	}
	else
	{
		p1=start;
		for (int i=0;i<=index;i++)
		{
			if (i==index)
			{
				p->next=p1;
				p1=p;
				break;
			}
			p1=p1->next;
			
		}
		
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



int listtoarr(int arr[],int i)
{
	node *p;
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
		return i;
	}
}

int main()
{
	int arr[1000];
	int i=1;
	insert(7);
	insert(3);
	insert(1);
	insert(9);
	insert(10);
	//show();
	//i=listtoarr(arr,i);  //return index of last element
	//remfromlast();
//	insertmid(2,2);
insertafter(2,10);
	show();
	
}
