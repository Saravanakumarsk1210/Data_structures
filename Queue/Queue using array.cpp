#include<iostream>
#define size 5
using namespace std;
class queue
{
    public:
    int q[size];
    int front;
    int rear;
    queue()
    {
        front=-1;
        rear=-1;
    }
    void enq(int);
    void deq();
    void display();
};
void queue::enq(int data)
{
    if((front==0&&rear==size-1)||(front==rear+1))
    {
        cout<<"QUEUE IS FULL";
        return;
    }
    else if(front==-1)
    {	
        front=0;
        rear=0;
    }
    else if(rear==size-1&&front!=0)
        rear=0;
    else
        rear=rear+1;
    q[rear]=data;
}
void queue::deq()
{
    if(front==-1)
    {
        cout<<"QUEUE IS EMPTY !!";
        return ;
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1 ;
    }
    else if(front==size-1)
        front=0 ;
    else
        front=front+1 ;
}
void queue::display()
{
    int f=front,r=rear;
    if (front==-1)
    {
      cout<<"\nNO ELEMENTS PRESENT"<<endl;
      return;
    }
    cout<<"Queue elements are :";
    if(f<=r)
   {
      while(f<=r)
      {
         cout<<q[f]<<" ";
         f++;
      }
   }
   else
   {
      while (f<=size-1)
      {
         cout<<q[f]<<" ";
         f++;
      }
      f=0;
      while(f<=r)
      {
         cout<<q[f]<<" ";
         f++;
      }
   }
   cout << endl;
}
int main()
{
    queue q;
  int ch,data;
  while(ch!=3)
  {
      cout<<"\n \n1.insert \n2.delete \n3.Display\nenter ur choice : ";
      cin>>ch;

      if(ch==1)
      {
        cout<<"\nenter element to insert : ";
        cin>>data;
        q.enq(data);
        q.display();
      }
      if(ch==2)
      {
        q.deq();
        q.display();
      }
      if(ch==3)
        q.display();
      else if (ch>3)
        cout<<"\ninvalid choice ;";
  }
}

