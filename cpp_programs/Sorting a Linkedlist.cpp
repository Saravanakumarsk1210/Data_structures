#include<iostream>
using namespace std;
class node
{
   public:
       int data;
       node* next;
};
void display(node* h)
{
 while(h!=NULL)
 {
  cout<<h->data<<"->";
  h=h->next;
 }
 cout<<"NULL"<<endl;
}

node* sorted(node* head)
{
    int t=0,c=0;
    node*curr=head,*p;

    if(head==NULL)
    {

        cout<<" no elements in linked list";
    }


for(curr=head;curr->next!=NULL;curr=curr->next)
{

for( p=curr->next;p->next!=NULL;p=p->next)
{

    if(curr->data >= p->data)
    {


        t=p->data;
        p->data = curr->data;
        curr->data=t;

    }
}

}
return head;
}


int main()
{
  int new_data;
  int pos,n;
  node* head = NULL;
  node* second = NULL;
  node* third =NULL;
  node* fourth = NULL;

  head=new node();
  second=new node();
   third=new node();
    fourth=new node();

    head->data=8;
    head->next=second;

    second->data=6;
    second->next = third;

    third->data=3;
     third->next = fourth;

    fourth->data=300;
      fourth->next = NULL;

  cout<<"\nOrginal list:\n\n";
  display(head);
   head = sorted(head);

  cout<<"\nsorted list:\n\n";
   display(head);

}
