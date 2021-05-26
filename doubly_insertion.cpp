//Doubly Linked List
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* rlink;
	struct node* llink;
};
void add_node(node* n)
{
	int num,i,flag=0;
	cout<<"enter number of nodes\n";
	cin>>num;
	for(i=0;i<num;i++)
	{
		node* tmp=new node();
		cout<<"enter data for node : "<<i+1<<"\n";
		cin>>tmp->data;
		if(n->rlink==NULL && n->llink==NULL && flag==0)
		{
			flag=1;
			n->rlink=tmp;
			tmp->llink=NULL;
			tmp->rlink=NULL;
		}
		else
		{
			tmp->rlink=n->rlink;
			n->rlink->llink=tmp;
			n->rlink=tmp;
			tmp->llink=NULL;
		}
	}
}
void display(node* n)
{
	n=n->rlink;
	int i=1;
	while(n->rlink!=NULL)
	{
		cout<<"data of node -> "<<i<<": "<<n->data<<"\n";
		n=n->rlink;
		i++;
	}
	cout<<"data of node ->"<<i<<": "<<n->data<<"\n";
}
int main()
{
	node* head=new node();
	head->data=1;
	head->rlink=NULL;
	head->llink=NULL;
	add_node(head);
	display(head);
}