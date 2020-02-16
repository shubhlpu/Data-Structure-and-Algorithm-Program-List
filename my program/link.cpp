//Program to insert the element in last and delete any element
#include<iostream>
using namespace std;
struct node
{
int val;
node *next;       
}*start=NULL,*temp=NULL,*ptr=NULL;

void creation();
void insertion(node *);
int deletion(node *);
void display(node *);

int main()
{
int choice;
if(start==NULL)
{
	creation();
}
   

while(1)
    {
cout<<"\n**** Enter choice: ****"  <<endl;
cout<<"1 : Insertion"  <<endl;
cout<<"2 : Deletion"  <<endl;
cout<<"3 : Display"  <<endl;
cout<<"4 : Exit"  <<endl;
cin>>choice;
switch(choice)
            {
case 1: 
insertion(start);
break;                     
case 2:
deletion(start);
break;                     
case 3:
display(start);
break;
case 4:
exit(1);
break;
default:
cout<<"Wrong choice..." <<endl;          
            }
    }  


return 0;    
}

void creation()
{
int n,i,j;
	cout<<"enter the no element: ";
	cin>>n;
	cout<<endl<<"enter the element: "<<endl;
	for(i=0;i<n;i++)
	{
	ptr=new node;
	cin>>ptr->val;
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
void insertion(node *p)                    
{
while(p->next!=NULL)
     {
          p = p->next;                    
     }
node *temp = new node;
cout<<"Enter data-value: ";
cin>> temp->val; 
temp->next = NULL;
p->next = temp;                     
}

int deletion(node *ptr)                 
{
node *ptrP = NULL;                          
if(ptr==NULL)
     {
cout<<"List is empty.."  <<endl;
return 0;
     }
int val1;
cout<<"Enter data-value to delete: ";
cin>>val1; 
while( (ptr!=NULL)&&(ptr->val!=val1) )
     {
ptrP = ptr;
ptr = ptr->next;                    
     }

if(ptr==NULL)                         
     {     
cout<<"Value doesn't exist in list"  <<endl; 
return 0;
     }
else if(ptrP==NULL)             
     {
start = start->next;
delete ptr;     
     }          
else                               
     {
ptrP->next = ptr->next;        
delete ptr;   
     }
}

void display(node *p)                    
{int n;
cout<<"\n Elements in linked-list are: " <<endl;
temp=start;
	while(temp)
	{
		cout<<temp->val<<"===>>";
		temp=temp->next;
	}
	cout<<"Null";
}
