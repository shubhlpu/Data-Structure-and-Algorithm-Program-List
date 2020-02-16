#include<iostream>
#include<conio.h>
using namespace std;
struct Node
{
    int info;
    struct Node *left,*right;
};
struct Node *Root,*par;
void create()
{
    Root=NULL;
    cout<<"\n Empty Binary search Tree Created";
}
struct Node * searchBST(int item)
{

    struct Node *loc,*ptr,*save;
if(Root==NULL)
{
    par=NULL; loc=NULL; cout<<"\n Not Found";return loc;
}
else if(Root->info==item)
{
loc=Root; par=NULL; return loc;
}
else
{
    if(item<Root->info)
    {
        save=Root;ptr=Root->left;
    }
    else
    {
        save=Root;ptr=Root->right;
    }
}
while(ptr!=NULL)
{
    if(item==ptr->info)
    {
        loc=ptr;par=save; return loc;
    }
    else if(item<ptr->info)
    {
        save=ptr; ptr=ptr->left;
    }
    else
    {
        save=ptr; ptr=ptr->right;
    }
}
loc=NULL; par=save;
cout<<"\n Not found";
return loc;
}
void insertBST()
{
    int item;
    cout<<"\n Enter value to insert";
    cin>> item;
struct Node *loc=searchBST(item);
if(loc!=NULL)
{
    cout<<"\n Node already exists";
    return;
}
else
{
    struct Node * t=new Node;
    t->info= item;
    t->left=t->right=NULL;
    if (par==NULL)
    {
        Root= t;
    }
    else if(item<par->info)
    {
        par->left=t;
    }
    else
    {
        par->right=t;
    }
    cout<<"\n Node Inserted";
}
}
void inorder(struct Node *p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        cout<<"\n"<<p->info;
        inorder(p->right);
    }
}
void preorder(struct Node *p)
{
    if(p!=NULL)
    {
        cout<<"\n"<<p->info;
        preorder(p->left);
        preorder(p->right);
    }
}
int main()
{
char ch;
do{


cout<<"\n Press 1 for create";
cout<<"\n Press 2 for search";
cout<<"\n Press 3 for insert";
cout<<"\n Press 4 for display inorder";
cout<<"\n Press 5 for display pre order";
cin>>ch;
switch(ch)
{
    case '1':  create(); break;
    case '2': int item;cout<<"\n enter value to search";cin>>item;searchBST(item);break;
    case '3': insertBST(); break;
    case '4': inorder(Root);break;
    case '5': preorder(Root);break;
    default: cout<<"\n Press Valid choice";
}
cout<<"\n Enter Y/y to continue and any other key to exit";
cin>>ch;
}while(ch=='Y' || ch=='y');
    getch();
    return 0;
}
