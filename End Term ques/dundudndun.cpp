#include<iostream>
using namespace std;
struct node{
	int info;
	struct node *link;
}*ptr=NULL,*temp=NULL;
struct node * start =NULL;
void creation()
{
	int n,i;
	cout<<"enter the no element: ";
	cin>>n;
	cout<<endl<<"enter the element: "<<endl;
	for(i=0;i<n;i++)
	{
	ptr=new node;
	cin>>ptr->info;
	ptr->link=NULL;
	if(start==NULL)
	start=ptr;
	else
	{
	temp=start;
	while(temp->link!=NULL)
	temp=temp->link;
	temp->link=ptr;
    }
	}
}
void insertbeg()
{
	int d;
	cin>>d;
	struct node * t=new node;
	t->info=d;
	if(start==NULL)
	{
		start=t;
		t->link=NULL;
	}
	else{
		t->link=start;
		start=t;
	}
}
void insertlast()
{
	int d;
	cin>>d;
	struct node * t=new node;
	struct node * p=new node;
	p=start;
	t->info=d;
	while (p->link!=NULL)
	{
		p=p->link;
	}
	p->link=t;
	t->link=NULL;
}
void insertafter()
{
	int d;
	cin>>d;
	struct node * t=new node;
	struct node * p=new node;
	p=start;
	t->info=d;
	cout<<"Enter element to insert after";
	int key;
	cin>>key;
	while(p->info!=key)
	{
		p=p->link;
	}
	t->link=p->link;
	p->link=t;
}
void inserbefore()
{
	int d;
	cin>>d;
	struct node * t=new node;
	struct node * p=new node;
	struct node * pre=new node;
	p=start;
	t->info=d;
	cout<<"Enter element to insert before";
	int key;
	cin>>key;
	while(p->info!=key)
	{
		pre=p;
		p=p->link;
	}
	t->link=pre->link;
	pre->link=t;
}
void display()                    
{ 
cout<<"\n Elements in linked-list are: " <<endl;
temp=start;
	while(temp)
	{
		cout<<temp->info<<"===>>";
		temp=temp->link;
	}
	cout<<"Null";
}
main()
{
	if(start==NULL)
	{
		creation();
	}
	display();
}
