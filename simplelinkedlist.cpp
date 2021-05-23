//A simple linked list with n nodes and print the data values;
#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* link;
};
void print_ln(node* n)
{
    n=n->link;
    int i=1;
    while(n->link!=NULL)
    {
        cout<<"data of node"<<i<<":"<<n->data<<"\n";
        n=n->link;
        i=i+1;
    }
    cout<<"data of node"<<i<<":"<<n->data;
}
int main()
{
    int st;
    node* head = new node();
    int n;
    cout<<"enter the number of nodes :";
    cin>>n;
    for(int i=1;i<=n;i++)
        if(i==1)
        {
            head->data=1;
            node* temp = new node();
            head->link=temp;
            cout<<"enter data :\n";
            cin>>temp->data;
            temp->link=NULL;
        }
        else
        {
            node* n;
            n = head->link;
            while(n->link!=NULL)
            {
                n=n->link;
            }
            node* temp = new node();
            n->link=temp;
            cout<<"enter data :\n";
            cin>>st;
            temp->data=st;
            temp->link=NULL;
        }

        print_ln(head);
return 0;
}