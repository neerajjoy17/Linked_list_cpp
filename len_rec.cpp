#include<iostream>
using namespace std;
int l=0;
struct node{
	int data;
	struct node* link;
};
void length(node* n){
	if(n->link!=NULL)
	{
		l++;
		length(n->link);
	}
	else
		cout<<"length of linkedlist : "<<l<<"\n";
}
int main()
{
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
	length(head);
}