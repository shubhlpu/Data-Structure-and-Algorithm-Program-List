#include<iostream>
using namespace std;

struct node{
	int info;
	node * link;
};
node * start=NULL;

void insertbegin()
{
	int d;
	cin>>d;
	node * temp=new node;
	node * ptr=new node;
	ptr=start;
	temp->info=d;
	if(start==NULL)
	{
		temp->link=temp;
		start=temp;
	}
	else
	{
		while(ptr->link!=start)
		{
			ptr=ptr->link;
		}
		temp->link=ptr->link;
		ptr->link=temp;
		start=temp;
	}
	cout<<"\nInserted";
}


void makefirstlast()
{
	node * temp=new node;
	node * ptr=new node;
	ptr=start;
	temp=start;
	ptr=ptr->link;
	start=ptr;	
}


void display()
{
	node * temp=new node;
	temp=start;
	do
	{
		cout<<" "<<temp->info;
		temp=temp->link;
	}while(temp!=start);
}

main()
{
	insertbegin();
	insertbegin();
	insertbegin();
	insertbegin();
	insertbegin();
	insertbegin();
	insertbegin();
	insertbegin();
	

	insertbegin();
	makefirstlast();
	display();
	//split();
}
