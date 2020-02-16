#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*start=NULL,*ptr=NULL,*temp=NULL;
void creation()
{
	int n,i;
	cout<<"\n Enter no. of element in LL-";
	cin>>n;
	cout<<"Enter ll element-";
	for(i=0;i<n;i++)
	{
		ptr=new node;
		cin>>ptr->data;
		ptr->next=NULL;
		if(start==NULL)
		start=ptr;
		else
		{
	    temp=start;
	    while(temp->next!=NULL)
		temp=temp->next;
		temp->next=ptr;
		
		}
	}
}
void insrtbeg()
{
	int d;
	cin>>d;
	node *p=new node;
	p=start;
	p->data=d;
	if(start==NULL)
	{
		start=p;
		ptr->next=NULL;
	}
	else
	{
		p->next=start;
		start=p;
	}
}
void insrtlast()
{
	int d;
	cin>>d;
	node *p=new node;
	node *t=new node;
	p=start;
	t->data=d;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=t;
	t->next=NULL;
	
}
void instaftr()
{
	int d,key;
	cin>>d;
	node *p=new node;
	node *t=new node;
	p=start;
	t->data=d;
	cin>>key;
	while(p->data!=key)
	{
		p=p->next;
	}
	t->next=p->next;
	p->next=t;
}
void insrtbfr()
{
	int d,key;
	node *pre=new node;
	node *p=new node;
	node *t=new node;
	cin>>d;
	p=start;
	t->data=d;
	cin>>key;
	while(p->data!=key)
	{
		pre=p;
		p=p->next;
	}
	t->next=pre->next;
	pre->next=t;
}
void display()
{  struct node *temp=new node;
	temp=start;
	while(temp)
	{
		cout<<temp->data<<"===>>";
		temp= temp->next;
	}
	cout<<"NULL";
}
main()
{
	if(start==NULL)
	{
		creation();
	}
	display();
}
