#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* link;
};
void display(node* n)
{
	if(n->link==NULL)
	{
		cout<<"link list empty\n";
	}
	n=n->link;
	while(n->link!=NULL)
	{
		cout<<"data of node : "<<n->data<<"\n";
		n=n->link;
	}
	cout<<"data of node : "<<n->data<<"\n";
}
void check(node* n)
{
	int key,flag=0;
	cout<<"enter key\n";
	cin>>key;
	while(n->link!=NULL)
	{
		if((n->link)->data==key)
		{
			n->link=(n->link)->link;
			cout<<"node deleted\n";
			flag=1;
			break;
		}
		n=n->link;
	}
	if(flag==0)
		cout<<"key not found\n";
}
void insert_node(node* n,int a)
{
	if(n->link==NULL)
	{
		for(int i=0;i<a;i++)
		{
			node* temp=new node();
			n->link=temp;
			cout<<"enter data for node:\n";
			cin>>temp->data;
			temp->link= NULL;
			n=n->link;
		}
	}
	else
	{
		for(int i=0;i<a;i++)
		{
			node* temp=new node();
			node* temp1=n->link;
			n->link=temp;
			cout<<"enter data for node:\n";
			cin>>temp->data;
			temp->link=temp1;
		}
	}
}
int main()
{
	node* head=new node();
	head->data=1;
	head->link=NULL;
	int i=0,num;
	cout<<"enter number of nodes\n";
	cin>>num;
	insert_node(head,num);
	check(head);
	display(head);
}