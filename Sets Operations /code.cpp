#include<iostream>
using namespace std;
int unionset(int arr1[], int arr2[], int m, int n)
   {
        int i = 0, j = 0;
        while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";

        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";

        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
    while (i < m)
        cout << arr1[i++] << " ";

    while (j < n)
        cout << arr2[j++] << " ";
}

int intersection(int arr1[], int arr2[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n) {
		if (arr1[i] < arr2[j])
			i++;
		else if (arr2[j] < arr1[i])
			j++;
		else
		{
			cout << arr2[j] << " ";
			i++;
			j++;
		}
}
}

int differnce(int arr1[], int arr2[], int m, int n)
{
    cout<<"DIFFERENCE (A-B):";
    for(int i=0;i<m;i++)
    {
     int k=0;
     for(int j=0;j<n;j++)
       {
        if(arr1[i]==arr2[j])
          {
           k=1;
           break;
          }
        }
        if(k==0)
          {
           cout<<arr1[i]<<" ";
          }

       }
       cout<<endl;
cout<<"DIFFERENCE (B-A):";
    for(int i=0;i<m;i++)
    {
     int k=0;
     for(int j=0;j<n;j++)
       {
        if(arr1[j]==arr2[i])
          {

           break;
          }
        }
          if(k==0)
          {
           cout<<arr2[i]<<" ";
          }
           } cout<<endl;
return 0;

}

int main()
{
    int arr1[20],arr2[20],m,n,ch;
    cout<<"             SETS  \n\n";
    cout<<"Enter size of array 1 :";
    cin>>m;
    cout<<"\nEnter size of array 1 :";
    cin>>n;
    cout<<"\nEnter elements of array 1:";
    for(int i=0;i<m;i++)
        cin>>arr1[i];
    cout<<"\nEnter elements of array 2:";
    for(int i=0;i<n;i++)
        cin>>arr2[i];

    cout<<"\n\nunionset of the two sets :";
    unionset(arr1,arr2,m,n);
    cout<<endl;

    cout<<"\nintersection of two sets :";
    intersection(arr1,arr2,m,n);
    cout<<endl;

        cout<<"\ndifferences of two sets :\n";
    differnce(arr1,arr2,m,n);
    cout<<endl;

}
