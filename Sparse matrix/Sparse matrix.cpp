#include<iostream>
using namespace std;
class node
{
public:
    int col ;
    int data ;
    node* next;
    };
class sparsemat
    {
    node* row[10];
    int nrow;
public:
     sparsemat(int n);
    void creation(int rownum,int columnum,int value);
    void display();
    void sd();
};
 sparsemat::sparsemat(int n)
{
    for(int j=0;j<n;j++)
    {
        row[j]=NULL;
    }
    nrow=n;
}
 void sparsemat::creation(int rownum,int colnum,int value)
 {
     node*nn =new node();
     nn->data=value;
     nn->col=colnum;
     nn->next=NULL;
     if(row[rownum]==NULL)
     {

         row[rownum]=nn;
         return;
     }
     node*t=row[rownum];
     while(t->next!=NULL)
     {
         t=t->next;
     }
     t->next=nn;
 }
 void sparsemat::display()
 {

     cout<<"\n\n THE ELEMENTS ARE :";
     int i,c=0;
     for(i=0;i<nrow;i++)
     {
         node*t=row[i];

        while(t!=NULL)
 {
     cout<<" "<<t->data;
     t=t->next;
     c++;
 }
 }
 cout<<"\nnumber of elements present is :"<<c;
 }
 void sparsemat::sd( )
 {
    cout<<"\n\nsum of diagonal is :";
    int i=0,sum=0;
    while(i<nrow)
    {
        node* t=row[i];
    while(t!=NULL)
    {
        if(t->col==i)
            {
               sum = sum +t->data;
            }
               t= t->next;
                  }
        ++i;
    }
    cout<< sum<<endl;

 }




 int main()
 {
 int n,nz,rownum,colnum,value;

 cout<<"ENTER THE NUMBER OF ROW :  ";
 cin>>n;
 sparsemat *spmat=new sparsemat(n);
 cout<<"ENTER THE NUMBER OF ELEMENTS :  ";
 cin>>nz;
 for(int i=0;i<nz;i++)
    {

        cout<<"ENTER THE ROW , COLOUMN AND MATRIX :  ";
        cin>>rownum>>colnum>>value;
        spmat->creation(rownum,colnum,value);

    }

    spmat->display();
      spmat->sd();

    return 0;
  }
