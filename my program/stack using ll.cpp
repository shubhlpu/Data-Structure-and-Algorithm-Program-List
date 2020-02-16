#include<iostream>
using namespace std;
struct node
{
	int info;
	node *next;
}*top=NULL;
void push()
{   
int val;
cout<<"Enter element to push-";
	cin>>val;

node *temp = new node;      //creating new node
temp->info = val;

if(top==NULL)              //checking if stack is empty
    {   
temp->next = NULL;      //assigning NULL to link of last node    
top = temp;             
    }    
else
    {
temp->next = top;       //adding new node in stack
top = temp;    
    }
}

void pop()
{
node *p;
if(top==NULL)              //checking if stack is empty
    {
cout<<"Stack is empty...";
    }
else
    {
    p = top;
    top = top->next;       //moving to next node
    cout<<"Element deleted is: " <<p->info  <<endl;   
    delete p; 
    }   
}

void display()
{
node *p = top;         //taking temporary pointer for traversing
cout<<"\n Elements in stack are: " <<endl;
while(p!=NULL)
   {
cout<<p->info  <<endl;
       p = p->next;                
   }
cout<<"NULL" <<endl;

}

main()
{
	push();
	pop();
	display();
}
