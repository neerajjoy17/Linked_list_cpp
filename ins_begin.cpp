#include <iostream>
using namespace std;
struct node{
	int data;
	struct node* link;
};
void display(node* n)
{
	int i=0;
	n=n->link;
	while(n->link!=NULL)
	{
		cout<<"data of node "<<i+1<<":"<<n->data<<"\n";
		n=n->link;
		i++;
	}
	cout<<"data of node "<<i+1<<":"<<n->data<<"\n";
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
	int num;
	node* head=new node();
	head->data=1;
	head->link=NULL;
	cout<<"enter number of nodes";
	cin>>num;
	insert_node(head,num);
	cout<<"enter additional nodes";
	cin>>num;
	insert_node(head,num); 
	display(head);
}