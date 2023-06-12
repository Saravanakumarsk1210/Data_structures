
#include<iostream>
#include<stdlib.h>
#define m 10
using namespace std;
class hasht
{
public:
    int a[m];
    hasht()
    {
        for(int i=0;i<m;i++)
            a[i]=0;
    }
    void insertt(int);
    void searchh(int);
    void display();
};

void hasht::insertt(int elem)
{
    int index;
    index=elem%m;
    if(a[index]==0)
        a[index]=elem;
    else
    {
        for(int i=1;i<=m;i++)
    {
        index=index+i;
        if(index==m-1&&a[index]!=0)
        {
            index=0;
            i=1;
        }
        if(a[index]==0)
        {
            a[index]=elem;
            return;
        }
    }
    }
}
void hasht::searchh(int elem)
{
    int c=0,index;
    index=elem%m;
    for(int i=index;i<=m;i++)
    {
        if(a[i]==elem)
        {
            cout<<"ELEMENT FOUND AT hasht INDEX :"<<i;
            c=1;
            return;
        }
        if(i==m-1)
            i=-1;
    }
    if(c==0)
        cout<<"\nELEMENT NOT FOUND";
}
void hasht::display()
{
    cout<<"ELEMENTS ARE :";
    for(int i=0;i<=m;i++)
        cout<<a[i]<<" ";
}
int main()
{
    hasht h;
    int elem,ch;
    while(ch!=3)
    {
        cout<<"\n1.INSERT\n2.SEARCH\n3.EXIT";
        cout<<"\nENTER YOUR CHOICE";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"ENTER 5 ELEMENTs TO INSERT : ";
            for(int i=0;i<5;i++)
            {
                cin>>elem;
            h.insertt(elem);
            }
            h.display();
            break;
        case 2:
            cout<<"ENTER ELEMENT TO SEARCH : ";
            cin>>elem;
            h.searchh(elem);
            break;
        case 3:
            exit(0);
        }
    }
}


