#include<iostream>
#include<string>
using namespace std;
struct node{
	int data;
	struct node* link;
};
void display(node* n)
{
	int i=0;
	if(n->link==NULL)
		cout<<"link list is empty\n";
	else{
		n=n->link;
		while(n->link!=NULL)
		{
			cout<<"data of node : "<<n->data<<"\n";
			n=n->link;
		}
		cout<<"data of node : "<<n->data<<"\n";
	}
}
void insert_end(node* n)
{
	char a[3];
	int i,num;
	cout<<"enter number of nodes : \n";
	cin>>num;
	while(n->link!=NULL)
	{
		n=n->link;
	}
	for(i=0;i<num;i++)
	{
			node* temp=new node();
			cout<<"enter data for node : ";
			cin>>temp->data;
			temp->link=NULL;
			n->link=temp;
			n=n->link;
	}
}
int main()
{
	int flag,opt;
	node* head=new node();
	head->link=NULL;
	head->data=1;
	flag=1;
	while (flag==1)
	{
		insert_end(head);
		start:
		cout<<"do you want to add more nodes : \n 1(yes) 2(no)";
		cin>>opt;
		if(opt==1)
		{
			insert_end(head);
			goto start;
		}
		else
		{
			flag=0;
		}
	}
	display(head);
	return 0;
}