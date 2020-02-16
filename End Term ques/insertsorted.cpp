#include<iostream>
using namespace std;
struct node{
	int info;
	node * link;
};
node * start=NULL;
void insertsorted()
{
	int d;
	cin>>d;
	node * temp=new node;
	node * pre=new node;
	pre=start;
	temp->info=d;
	if(start==NULL || start->info>temp->info)
	{
		temp->link=NULL;
		start=temp;
	}
	else{
		while(pre->link!=NULL && pre->link->info<temp->info)
		{
			pre=pre->link;
		}
		temp->link=pre->link;
		pre->link=temp;
	}
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
	insertsorted();
	insertsorted();
	insertsorted();
	insertsorted();
	display();

}
