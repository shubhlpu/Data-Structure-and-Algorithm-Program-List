#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
	int data;
	struct node *left,*right;
};

struct node* insert(struct node* root,int data)
{
	struct node *temp;
	if(root==NULL)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=data;
		temp->left=temp->right=NULL;
		return temp;
	}
	if(data>root->data)
	root->right=insert(root->right,data);
	else if(data<root->data)
	root->left=insert(root->left,data);
	return root;
}

void preOrder(struct node* root)
{
	if(root)
	{
		cout<<root->data<<" ";
		preOrder(root->left);
		preOrder(root->right);
	}
}

void inOrder(struct node *root)
{
	if(root!=NULL)
	{
		inOrder(root->left);
		cout<<root->data<<" ";
		inOrder(root->right);
	}
}

void postOrder(struct node* root)
{
	if(root)
	{
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<" ";
	}
}

int search(struct node* root,int key)
{
	static int dep=0;
	if(root->data==key)
	{
		cout<<"\n\n"<<key<<" found at depth "<<dep<<" Position !";
		return 0;
	}
	dep++;
	if(key>root->data)
	search(root->right,key);
	else if(key<root->data)
	search(root->left,key);
}

main()
{
	struct node *root=NULL;
	int i,n,data,key;
	cout<<"\nEnter total no. of Nodes : ";
	cin>>n;
	cout<<"\nEnter the value of Root Node : ";
	cin>>data;
	root=insert(root,data);
	for(i=0;i<n-1;i++)
	{
		cout<<"\nEnter the value of Nodes : ";
		cin>>data;
		insert(root,data);
	}
	cout<<"\n\nPre-Order : ";
	preOrder(root);
	cout<<"\n\nIn-Order : ";
	inOrder(root);
	cout<<"\n\nPost-Order : ";
	postOrder(root);
	cout<<"\n\nEnter Element which you want to search : ";
	cin>>key;
	search(root,key);
}
