#include<iostream>
using namespace std;
struct node{
	int info;
	node * link;
};
node * start=NULL;
void insertbegin(){
	cout<<"Enter info\n";
	int d;
	cin>>d;
	node * n=new node;
	n->info=d;
	if(start==NULL){
		start=n;
		n->link=NULL;
	}
	else
	{
		n->link=start;
		start=n;
	}
}

void insertlast()
{
	cout<<"Enter info\n";
	int d;
	cin>>d;
	node * n=new node;
	n->info=d;
	node * temp=new node;
	temp=start;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	n->link=NULL;
	temp->link=n;
}

void insertbefore()
{
	cout<<"Enter info\n";
	int d,x;
	cin>>d;
	node * n=new node;
	node * pre=new node;
	node * temp=new node;
	temp=start;
	pre=temp;
	n->info=d;
	cout<<"Enter the number to insert before ";
	cin>>x;
	while(temp->info!=x)
	{
		pre=temp;
		temp=temp->link;
	}
	n->link=pre->link;
	pre->link=n;
}

void insertafter()
{
	cout<<"Enter info\n";
	int d,x;
	cin>>d;
	cout<<"Enter the number to insert after ";
	cin>>x;
	node * n=new node;
	n->info=d;
	node * temp=new node;
	temp=start;
	while(temp->info!=x)
	{
		temp=temp->link;
	}
	n->link=temp->link;
	temp->link=n;
}
void display()
{
	node * temp=new node;
	temp=start;
	while(temp!=NULL)
	{
		cout<<endl<<temp->info;
		temp=temp->link;
	}
}

main()
{
	insertbegin();
	insertlast();
	insertbefore();
	insertafter();
	display();
}
