#include<iostream>
using namespace std;
struct node{
	node *prev;
	int data;
	node *next;
}*start=NULL;
void creation()
{   int i,d;
    cin>>d;
	cout<<"Enter element in linked list-";
	for(i=0;i<d;i++)
	{
		start=new node;
		cin>>start->data;
		start->next=NULL;
		start->prev=NULL;
	}
}
void insertion(node *p)
{   
    
    while(p->next!=NULL)
    {
    	p=p->next;
	}
	node *temp=new node;
	int e;
	cout<<"Enter element-";
	cin>>e;
	temp->data=e;
	temp->next=NULL;
	p->next=temp; 
	temp->prev=p;
}
int deletion(node *ptr)
{
	if(ptr==NULL)
	{
		cout<<"List is empty-"<<endl;
		return 0;
	}
	int val;
	cin>>val;
	while((ptr!=NULL) && (ptr->data!=val))
	{
		ptr=ptr->next;
	}
	if(ptr==NULL)
	{
		cout<<"Value doesn't exis"<<endl;
		return 0;
	}
	else if(ptr->prev==NULL)
	{
		start=start->next;
	    delete ptr;
	}
	else
	{
		(ptr->prev)->next=ptr->next;
		delete ptr;
	}
}
void display(node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<"<<===>>";
		p=p->next;
	}
	cout<<"NULL";
}
main()
{
	if(start==NULL)
	{
		creation();
	}
	
	display(start);
}
