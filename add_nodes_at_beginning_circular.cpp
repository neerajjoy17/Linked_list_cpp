#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* link;
};
void connect_head(node* n)
{
	n->link=n->link->link;
}
void add_node(node* n)
{
	int num,i;
	node* last=new node();
	last->data=0;
	last->link=NULL;
	cout<<"enter no. of nodes\n";
	cin>>num;
	for(i=0;i<num;i++)
	{
		node* tmp=new node();
		cout<<"enter data for new node :\n";
		cin>>tmp->data;
		if(n->link==NULL)
		{
			n->link=tmp;
			tmp->link=tmp;
			last->link=tmp;
			n=n->link;
		}
		else
		{
			tmp->link=n;
			while(n!=last->link)
				n=n->link;
			n->link=tmp;
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
		cout<<"data of node : "<<n->data<<"\n";
		node* tmp=new node();
		tmp->link=n;
		n=n->link;
		while(tmp->link!=n)
		{
			cout<<"data of node : "<<n->data<<"\n";
			n=n->link;
		}
	}
}
int main()
{
	node* head=new node();
	head->data=1;
	head->link=NULL;
	add_node(head);
	connect_head(head);
	display(head);
	return 0;
}