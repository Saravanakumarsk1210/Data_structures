#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
  public:
  int data;
  node* next;
};
node *insert(node *head,int pos,int item)
{
    int count=0;
    node*n=head;
    while(n!=NULL)
    {
        count++;
        n=n->next;
    }
    if(pos==1)
    {
        node *newn= new node();
        newn->data=item;
        newn->next=head;
        head=newn;
        return head;
    }
    else if(pos>count+1)
    {
        cout<<"\nThere are only "<<count<<" elements present in the list."<<endl;
        return head;
    }
    else
    {
        node*h=head;
        for(int i=1;i<pos;i++)
        {
            if(i==(pos-1))
            {
                node *newn=new node();
                newn->data=item;
                newn->next=h->next;
                h->next=newn;
            }
            h=h->next;
        }
        return head;
    }
}
node *deletion(node*head)
{
    int ch,i,key,pos,count=0;
    node*curr=head;
    node*n=head;
    cout<<endl<<"\n1.Position\n2.Key Deletion:";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"\nEnter a position to delete:";
            cin>>pos;
            while(n!=NULL)
            {
                count++;
                n=n->next;
            }
            if(pos==1)
            {curr=head->next;
                delete(head);
                return curr;
            }
            else
            {
                for (i = 1; curr != NULL && i <pos-1 ; i++)
                curr = curr->next;
                if (curr == NULL || curr->next == NULL)
                return head;
                node* next = curr->next->next;
                node*w=curr->next;
                delete(w);
                curr->next = next;
            }
            return head;
            break;
        case 2:
            cout<<"\nEnter a key to delete:";
            cin>>key;
            node*curr;
            node*t;
            if(head->data==key)
            {
                curr=head->next;
                delete(head);
                return curr;
            }
            else
            {
                curr=head;
                while(curr!=NULL)
                {
                    if(curr->next==NULL)
                    {
                        cout<<"\nKey not found.";
                        return head;
                    }
                    else if(curr->next->data==key)
                    {
                        t=curr->next->next;
                        delete(curr->next);
                        curr->next=t;
                        cout<<"\nNode deleted.";
                        return head;
                    }
                    curr=curr->next;
                }
            }
     }
 }
void searching(node *head)
{
    int c=0,a=0,i;
    cout<<"\nEnter the data to search: ";
    cin>>i;
    while(head!=NULL)
    {
       c++;
       if(head->data==i)
       {
            a=1;
            cout<<"\nData found at position "<<c;
            break;
       }
       head=head->next;
    }
   if(a==0)
   cout<<"\nData not found\n\n";
}
void display(node*head)
{
    if(head==NULL)
            cout<<"\nEmpty List.";
    cout<<"\nThe elements are:";
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main()
{
int ch;
         int nodes;
    cout<<"No.of Nodes:";
    cin>>nodes;
    node *head=NULL;
    cout<<"Enter Elements:";
    node* nn=new node();
    if(head==NULL)
    {
        cin>>nn->data;
        nn->next=NULL;
        head=nn;
    }
    int c=1;
    node *curr=head;
    while(c!=nodes)
    {
        node *n1=new node();
        cin>>n1->data;
        n1->next=NULL;
        curr->next=n1;
        curr=n1;
        c++;}
while(ch!=5)
  {
       cout<<"\nEnter any one operation to perform:\n1.Insertion\n2.Deletion\n3.Search\n4.Exit:\n";
       cin>>ch;
      switch (ch){
      case 1:
        display(head);
           int pos,item;
           int set;
           cout<<"\n\nEnter a position at which you want to insert: ";
           cin>>pos;
           cout<<"\nEnter a element to insert: ";
           cin>>item;
           head=insert(head,pos,item);
           display(head);
           break;
      case 2:
        display(head);
        head=deletion(head);
        display(head);
        break;
      case 3:
        display(head);
        searching(head);
        display(head);
        break;
      case 4:
        exit(0);
        break;}}
  return 0;}
