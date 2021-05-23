#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* link;
};
void display(node* n)
{
	int pos=1;
	if(n->link==NULL)
	{
		cout<<"link list empty\n";
	}
	n=n->link;
	while(n->link!=NULL)
	{
		cout<<"data of node "<<pos<<":"<<n->data<<"\n";
		n=n->link;
		pos++;
	}
	cout<<"data of node "<<pos<<":"<<n->data<<"\n";
}
int lngth(node* n)
{
	int i=0,k;
	node* tmp=new node();
	while(n->link!=NULL)
	{
		i++;
		n=n->link;
	}
	cout<<"total nodes : "<<i<<"\n";
	return i;
}
node* nth_node(node* n,int num,int pos)
{
	int k;
	k=num-pos;
	for(int j=0;j<=k;j++)
	{
		n=n->link;
	}
	return n;
}
int main()
{
	int nth;
	node* head=new node();
	head->link==NULL;
	head->data=1;
	int i=0,num;
	cout<<"enter the number of nodes : \n";
	cin>>num;
	for(i=0;i<num;i++)
	{
		node* tmp=new node();
		tmp->link=head->link;
		cout<<"enter data for node : \n";
		cin>>tmp->data;
		head->link=tmp;
	}
	display(head);
	cout<<"what position from the end :\n";
	cin>>nth;
	node* temp = new node();
	temp=nth_node(head,lngth(head),nth);
	cout<<"node from "<<nth<<"rd position from the back is the node with data "<<temp->data;
}