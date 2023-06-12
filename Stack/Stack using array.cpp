#include<iostream>
using namespace std;
#define MAX 100
class stack
 {
    int top=-1;
public:

    int a[MAX];
    bool push(int x);
    int pop();
    bool isempty();
    void display();
};
bool stack::push(int x)
{
    if(top>=(MAX-1))
    {
        cout<<"stack overflow";
        return false;
    }
    else
    {
        a[++top]=x;

        return true;
    }
}
int stack::pop()
{
    int x;
    if(top<0)
    {
        cout<<"underflow";
        return 0;
    }
    else
    {
        x=a[top--];

}
}

bool stack :: isempty()
{
   if(top==-1)
   {
    cout<<"stack contain no element ";
    return true ;
   }

   else
    {
    cout<<"stack is not empty ";
    return true ;
    }

}
void stack:: display()
{
 if(top>=0)
    {
 cout<<"Stack elements are:";

 for(int i=top; i>=0; i--)
 cout<<a[i]<<" ";
 cout<<endl;
 }
 else
 cout<<"Stack is empty";
}

int main() {
 int ch, x;
 stack s;
 while (ch!=5)
 {

 cout <<endl;

 cout<<"1) Push in stack"<<endl;
 cout<<"2) Pop from stack"<<endl;
 cout<<"3) isempty stack"<<endl;
 cout<<"4) Display stack"<<endl;

 cout<<"\nEnter choice: "<<"\t";
 cin>>ch;

 switch(ch)
  {
 case 1:
     {
 cout<<"Enter value to be pushed:"<<endl;
 cin>>x;
 s.push(x);
 s.display();
 break;
 }
 case 2:
  {
 cout<<s.pop()<<"element is popped "<<endl;
 s.display();

 break;
 }
  case 3:
    {
      s.isempty();
        break;
    }
 case 4:
    {
        s.display();
        break;
    }

 default:
     {
        cout<<" Invalid Choice "<<endl;
    }
  }
 }
return 0;
}






