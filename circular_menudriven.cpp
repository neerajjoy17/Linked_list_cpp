//menu driven program for circular linked list;
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* link;
};
void deletion_at_end(node* n){
	if(n->link==NULL)
		cout<<"linkedlist empty\n";
	else
	{
		node* tmp=new node();
		tmp->link=n->link;
		n=n->link;
		while(n->link->link!=tmp->link)
			n=n->link;
		n->link=tmp->link;
		cout<<"node deleted from end\n";
		free(tmp);
	}
}
void deletion_at_frnt(node* n)
{
	if(n->link==NULL)
		cout<<"linkedlist empty\n";
	else
	{
		node* tmp=new node();
		tmp=n->link;
		n->link=n->link->link;
		n=n->link;
		while(n->link!=tmp)
			n=n->link;
		n->link=tmp->link;
		cout<<"node deleted\n";
		free(tmp);
	}
}
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
		cout<<"-----------LINKED LIST-------------\n";
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
	int num,flag=1;
	node* head=new node();
	head->data=1;
	head->link=NULL;
	if(num==4)
	{
		free(head);
		flag=0;
	}
	while(flag==1)
	{
		cout<<"Enter Option :\n1.add_node_at_front\n2.delete_node_from_end\n3.display_linkedlist\n4.delete_node_from_front\n5.exit ";
		cin>>num;
		switch(num)
		{
			case 1:
				add_node(head);
				connect_head(head);
				break;
			case 2:

				deletion_at_end(head);
				break;
			case 3:
				display(head);
				break;
			case 4:
				deletion_at_frnt(head);
				//free(head->link);
				break;
			case 5:
				flag=0;
				break;
		}
	}

}