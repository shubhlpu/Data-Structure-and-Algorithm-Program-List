#include<iostream>
using namespace std;
struct node{
	int info;
	struct node *next;
}*ptr=NULL,*temp=NULL;
struct node *start=NULL;
void creation()
{
	int n,i;
	cin>>n;
	cout<<"Enter the element in LL-";
	for(i=0;i<n;i++)
	{
		ptr=new node;
		cin>>ptr->info;
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
void insert_beg()
{
	int d;
	cin>>d;
	node *p=new node;
	p->info=d;
	if(start==NULL)
	{
		start=p;
		start->next=NULL;
	}
	else
	{
		p->next=start;
		start=p;
	}
}
void insert_last()
{
	int d;
	cin>>d;
	node *p=new node;
	node *t=new node;
	p=start;
	t->info=d;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=t;
	t->next=NULL;
}
void insertafter()
{
	int d,key;
	cin>>d;
	node *p=new node;
	node *t=new node;
	p=start;
	t->info=d;
	cin>>key;
	while(p->info!=key)
	{
		p=p->next;
	}
	t->next=p->next;
	p->next=t;
}
void insertbefore()
{
	int d,key;
	node *p=new node;
	node *t=new node;
	node *pre=new node;
	cin>>d;
	p=start;
	t->info=d;
	cin>>key;
	while(p->info!=key)
	{   pre=p;
		p=p->next;
	}
	t->next=pre->next;
	pre->next=t;
}
void display()
{  struct node *o=new node;
	o=start;
	while(o)
	{
		cout<<o->info<<"===>>";
		o= o->next;
	}
	cout<<"NULL";
}
int deletion(node *ptr)
{   node *p=NULL;
   if(ptr==NULL)
     {
cout<<"List is empty.."  <<endl;
return 0;
     }
    int d;
	cout<<"Enter the node u ant to delete-";
	cin>>d;
	while((ptr!=NULL) && (ptr->info!=d))
	{   
	    p=ptr;
		ptr=ptr->next;
	}
	if(ptr==NULL)
	{
		cout<<"Value doesn't exist"<<endl;
		
	}
	else if(p==NULL)
	{
		start=start->next;
		delete ptr;
	}
	else {
		p->next=ptr->next;
		delete ptr;
	}
}
main()
{
	if(start==NULL)
	{
		creation();
	}
	int ch;
	do{
	cout<<"\n Press 1 for INsert Begin";
    cout<<"\n Press 2 for Insert Last";
    cout<<"\n Press 3 for Insert After";
    cout<<"\n Press 4 for Insert Before";
    cout<<"\n Press 5 for delete an element";
	cout<<"\n Press 6 for Display";
	
	cout<<endl<<"Enter your choice-";
	cin>>ch;
	switch(ch)
	{
	
	case 1: insert_beg(); break;
	case 2: insert_last(); break;
	case 3: insertafter(); break;
	case 4: insertbefore(); break;
	case 5: deletion(start); break;
	case 6: display(); break;
	}cout<<endl<<"Press 0 to continue and any other key to exist-";
	cin>>ch;
}while(ch==0);
cout<<endl<<"***************************EXIST**************";
}
