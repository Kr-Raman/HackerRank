#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node * left , *right;
};

Node * newNode(int data)
{
    Node * node = new Node();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

Node * insertnode(Node * root , int data )
{
    if(root == NULL)
    {
        root  = newNode(data);
    }
    else if(data > root->data)
    {
        root->right = insertnode(root->right,data);
    }
    else if(data < root->data)
    {
        root->left = insertnode(root->left , data);
    }
    else{
        cout<<"Duplicate values are not allowed"<<endl;
    }
    return root;
}
void Printtree (Node * root)
{
    if(root == NULL)
    {
        return;
    }
    Printtree(root->left);
    cout<<root->data<<" ";
    Printtree(root->right);

  
}

bool isSame (Node * root1 , Node * root2)
{
    //1.if both the trees are empty
    if(root1 == NULL && root2 == NULL )
    {
        return true;
    }
    //2.if trees are not empty and containes some values
    if(root1!=NULL && root2!=NULL)
    {
        return (
                root1->data = root2->data &&
                isSame(root1->left,root2->left) &&
                isSame(root1->right,root2->right)
                
        );
    }
    // 3. if the above two conditions are not met then the two trees are not Identical
    return false;
}


int main()
{
    Node * root1 ;
    root1 = NULL;
    root1 = insertnode(root1 , 5 );
    root1 = insertnode(root1 , 12 );
    root1 = insertnode(root1 , 2 );
    root1 = insertnode(root1 , 15 );
    root1 = insertnode(root1 , 33 );
    root1 = insertnode(root1 , 24 );
    root1 = insertnode(root1 , 67);
    root1 = insertnode(root1 , 34);
    root1 = insertnode(root1 , 21 );
    root1 = insertnode(root1 , 56 );
    Node * root2 = NULL;
    root2 = insertnode(root2 , 5 );
    root2 = insertnode(root2 , 12 );
    root2 = insertnode(root2 , 2 );
    root2 = insertnode(root2 , 15 );
    root2 = insertnode(root2 , 33 );
    root2 = insertnode(root2 , 24 );
    root2 = insertnode(root2 , 67);
    root2 = insertnode(root2 , 34);
    // root2 = insertnode(root2 , 22 );
    root2 = insertnode(root2 , 56 );
    cout<<"tree 1 ::"<<endl;
    Printtree(root1);
    cout<<endl;
    cout<<"tree 2 ::"<<endl;
    Printtree(root2);
    cout<<endl;
    
    if(isSame(root1,root2))
    {
        cout<<"The two trees are similar"<<endl;
    }
    else
    {
        
        cout<<"The two trees are Not similar"<<endl;
    }
    
    return 0;
}