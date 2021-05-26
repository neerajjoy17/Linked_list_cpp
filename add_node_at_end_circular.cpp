//circular add node at end
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* link;
};
void add_node(node* n){
	int num;
	node* last=new node();
	last->data=0;
	cout<<"enter number of nodes\n";
	cin>>num;
	for(int i=0;i<num;i++)
	{
	if(n->link==NULL)
	{
		node* tmp=new node();
		n->link=tmp;
		cout<<"enter data for node 1 : \n";
		cin>>tmp->data;
		tmp->link=tmp;
		last->link=tmp;
		n=n->link;
	}
	else
	{
		while(last->link!=n)
			n=n->link;
		node* tmp=new node();
		cout<<"enter data for node : \n";
		cin>>tmp->data;
		tmp->link=n->link;
		n->link=tmp;
		last->link=tmp;
		n=n->link;
	}
}
}
void display(node* n)
{
	if(n->link==NULL)
		cout<<"linked list empty\n";
	else
	{
		n=n->link;
		cout<<"data of node 1 :"<<n->data;
		node* tmp=new node();
		tmp->link=n;
		n=n->link;
		while(tmp->link!=n->link)
		{
			cout<<"data of node : "<<n->data<<"\n";
			n=n->link;
		}
		cout<<"data of node : "<<n->data<<"\n";
	}
}
int main()
{
	int num;
	node* head=new node();
	head->data=1;
	head->link=NULL;
	add_node(head);
	display(head);
}