#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cout<<"Enter the row and column of matrix:\n";
    cin>>r>>c;
    int a[r][c];
    cout<<"\nEnter matrix A elements :\n";
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
          cin>> a[i][j];
    cout<<"\n Matrix A elements :\n";
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
          cout<<a[i][j]<<"\t";
          cout<<"\n";
        }
    cout<<"Mirror matrix of matrix A:\n";
    for(i=0;i<r;i++)
         {
            for(j=c-1;j>=0;--j)
          cout<<a[i][j]<<"\t";
          cout<<"\n";
        }
    return 0;
}
