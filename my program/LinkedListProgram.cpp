#include<iostream>
#include<conio.h>

using namespace std;

struct Node
{
    int info;
    struct Node *link;
};

struct Node *Start;

void create(){Start=NULL;}

void insertBegin()
{
int d; cout<<"\n Enter Node Info";cin>>d;
struct Node *t= new Node;  t->info=d;
if(Start==NULL){Start=t;t->link=NULL;}
else{
    t->link=Start;  Start=t;
}
cout<<"\n Node Inserted at Begin";
}

void display()
{
    struct Node *t;
    if(Start==NULL){cout<<"\n List Empty";}
    else{
        t=Start;
        while(t!=NULL)
        {
            cout<<"\n"<<t->info;
            t= t->link;
        }
    }
}

void insertLast()
{
	
int d; cout<<"\n Enter Node Info";cin>>d;

struct Node *t=new Node;  t->info=d;

struct Node *p=Start;

while(p->link!=NULL){

p=p->link;
}
p->link=t;
t->link=NULL;
cout<<"Node inserted at last"<<endl;
}

void deleteFirst(){

if(Start!=NULL){
Start=Start->link;
cout<<"First element deleted"<<endl;	
}

else{
	cout<<"Empty Linked List"<<endl;
}
}
void deleteLast(){

struct Node *t;
struct Node *p;

if(Start!=NULL){
p=Start;
t=p;
while(p->link!=NULL){
t=p;
p=p->link;
}
t->link=NULL;
cout<<"Last element deleted"<<endl;	
}

else{
	cout<<"Empty Linked List"<<endl;
}
}


void insertAfter(){
	
int d,e;
cout<<"ENTER THE VALUE AFTER WHICH YOU WANT TO INSERT"<<endl;
cin>>d;
cout<<"ENTER THE NEW VALUE WHICH YOU WANT TO INSERT"<<endl;
cin>>e;
struct Node *n=new Node;
n->info=e;
n->link=NULL;
cout<<"INSERTING............."<<endl;
cout<<"........"<<endl;
struct Node *p;
p=Start;
while(p->link!=NULL){
if(p->info==d){
n->link=p->link;
p->link=n;	
cout<<"Element inserted after"<<d<<endl;
break;
}
else{
p=p->link;	
}
}

}
void minValue(){
	
	int min;
	struct Node *p;
	p=Start;
	min=Start->info;
	while(p->link!=NULL){
	
	if(min>p->link->info){
		min=p->info;
	}	
	p=p->link;	
	}
	cout<<"MINIMUM VALUE IS"<<min<<endl;
	
}

void deleteAlternate(){
	
	
	
	
	struct Node *ptr=Start;
	struct Node *t;
	while(ptr->link!=NULL){
	
	t=ptr;
	ptr=ptr->link;
	
	t->link=ptr->link;
	}
}



int main()
{
    char ch;
    do{
    cout<<"\n Press 1 for Create.";
    cout<<"\n Press 2 for Insert Begin";
    cout<<"\n Press 3 for Display";
    cout<<"\n Press 4 for Insert Last";
    cout<<"\n Press 5 for Delete first";
    cout<<"\n Press 6 for Delete last";
    cout<<"\n Press 7 for Insert after element";
    cout<<"\n Press 8 for Minimum element";
    cin>>ch;
    switch(ch)
    {
        case '1': create();break;
        case '2': insertBegin();break;
        case '3': display(); break;
        case '4': insertLast();break;
        case '5': deleteFirst();break;
        case '6': deleteLast();break;
        case '7': insertAfter();break;
        case '8': minValue();break;
        case '9':deleteAlternate();break;
		default: cout<<"\n Enter valid choice";
    }
        cout<<"\n Press Y/y to continue and any other key to exit";
        cin>>ch;
    }while(ch=='y' || ch=='Y');
    cout<<"\n Exiting";
    getch();
    return 0;
}

