#include<iostream>
using namespace std ; 
class node
{
    public:
    char data ;
    node* left;
    node* right ;
};
node* newnode ( char data)
{
    node* temp=new node;
    temp->right=NULL;
    temp->left=NULL;
    temp->data=data;
}
int inorder(node* root)
{
    if(root==NULL)
        return 0;
    else
    {
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }

}
int preorder(node* root)
{
    if(root==NULL)
        return 0;
    else
    {

        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
    }

}
int postorder(node* root)
{
    if(root==NULL)
        return 0;
    else
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data;
    }

}
int depth(node* root)
{
        if(root==NULL)
        return 0;
    else
{

    int ldepth,rdepth;
    ldepth =depth(root->left);
    rdepth =depth(root->right);

    if(ldepth>rdepth)
        return (ldepth +1);
    else
        return (rdepth+1);

}
}
int non(node* root)
{

    static int i;
    if(root!=NULL)
    {
        i++;
        non(root->left);
        non(root->right);
        return i;
}

}
int cnon(node* root)
{

    static int i;
    if(root!=NULL)
    {
        if((root->left!=NULL&&root->right==NULL)||(root->right!=NULL&&root->left==NULL))
        i++;
        cnon(root->left);
        cnon(root->right)
 return i;
}
}
int main()

{
    node* root          =newnode('A');
    root->left          =newnode('B');
    root->right         =newnode('C');
    root->left->left    =newnode('D');
    root->left->left    =newnode('F');
    root->left->right   =newnode('G');
    root->right->left   =newnode('E');
    root->right->left->right= newnode('H');
    cout<<"\tTRAVERSAL\n\n";
    cout<<"INORDER IS    : ";
    inorder(root);cout<<endl;
    cout<<"PREORDER IS   : ";
    preorder(root);
    cout<<"\nPOST ORDER IS : ";
    postorder(root);cout<<endl;
   cout<<"\n\nHEIGHT OF THE NODE  = "<< depth(root)<<endl;
    cout<<"TOTAL NUMBER OF NODES : " <<non(root);
    cout<<"\nNODE THAT HAS ONE CHILDREN : " <<cnon(root)<<endl;
}

