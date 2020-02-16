#include<iostream>
using namespace std;
struct node{
	int info;
	struct node *link;
};
struct node * start =NULL;
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
	struct node * p=new node;
	p=start;
	while (p!=NULL)
	{
		cout<<" "<<p->info;
		p=p->link;
	}
}
void insertbeforemax()
{
	struct node * t=new node;
	struct node * p=new node;
	struct node * newnode=new node;
	struct node * pre=new node;
	cout<<" \nEnter data to insert ";
	int d,max;
	max=start->info;
	cin>>d;
	newnode->info=d;
	p=start;
	if(start==NULL)
	{
		cout<<"No data found to find max";
		return;
	}
	while(p!=NULL)
	{
		if(max<p->info)
		{
			pre=t;
			t=p;
			max=p->info;
			cout<<max;
		}
		p=p->link;
	}
	newnode->link=pre->link;
	pre->link=newnode;
	cout<<"\nElement insert before "<<max;
}
main()
{
	char ch;
    do{
    cout<<"\n Press 1 for INsert Begin";
    cout<<"\n Press 2 for Insert Last";
    cout<<"\n Press 3 for Insert After";
    cout<<"\n Press 4 for Insert Before";
	cout<<"\n Press 5 for Display";
	cout<<"\n Press 6 for insert before max";
    cin>>ch;
    switch(ch)
    {
        case '1': insertbeg() ;break;
        case  '2': insertlast() ;break;
        case '3': insertafter() ; break;
        case '4': insertlast() ;break;
        case '5': display(); break;
        case '6': insertbeforemax(); break;
		default: cout<<"\n Enter valid choice";
    }
        cout<<"\n Press Y/y to continue and any other key to exit       ";
        cin>>ch;
    }while(ch=='y' || ch=='Y');
    cout<<"\n Exiting";
}
