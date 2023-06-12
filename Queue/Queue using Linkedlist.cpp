
#include<iostream>
using namespace std;
class node
{
    public:
    node*next;
    int data;
};
class queue
{
    public:
    node*front=NULL;
    node*rear=NULL;
    void enq(int);
    void deq();
    void display();
};
void queue::enq(int data)
{
    node*nn=new node();
    nn->data=data;
    nn->next=NULL;
    if(front==NULL)
    {
        front=nn;
        rear=nn;
    }
    else
    {
        rear->next=nn;
        rear=nn;
    }
}
void queue::deq()
{
    node*t;
    if(front != NULL)
    {
       if(front!=NULL)
       {
           t=front;
           front=front->next;
           if(front==NULL)
            rear=NULL;
       }

    }
    else
        cout<<"Q EMPTY";
}
void queue:: display()
{
    node*t=front;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}
int main()
{
    queue q;
    int ch=0,data;
    while(ch!=3)
    {
        cout<<"\n1.INSERT\n2.DELETE\n3.DISPLAY\nENTER YOUR CHOICE : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nenter an item to insert  : ";
            cin>>data;
            q.enq(data);
            cout<<"\nQueue Elements are : ";
            q.display();
            break;
        case 2:
            q.deq();
            cout<<"\nQueue Elements are : ";
            q.display();
            break;
        case 3:
q.display();
break;
        default:
 	 cout<<"invalid choice !";
	return 0;
	
        }
    }
}









