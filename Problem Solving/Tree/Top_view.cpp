#include<bits/stdc++.h>
using namespace std;
// Node type structure is created
struct Node
{
    int key;
    int h_dist;
    Node * left , *right;
};

// create node function

Node * createNewNode (int key)
{
    Node * node = new Node();
    node->key = key;
    node->left = node->right = NULL;
    return node;
}

Node * insertNode (Node * root ,int key)
{
    if(root == NULL)
    {
       root =  createNewNode(key);
    }
    else if (key<root->key)
    {
         root->left = insertNode(root->left , key);
    } 
    else if (key>root->key)
    {
         root->right = insertNode(root->right , key);
    }
    else    
    {   
        cout<<"Duplicate Nodes are not allowed";
    }
    return root;
}
void printTree (Node * node)
{
    if(node == NULL)
    {
        return;
    }
    
    printTree(node->left);
    cout<<node->key<<" ";
    printTree(node->right);
    
}
int main()
{
    Node * root = NULL;
    root = insertNode(root ,5);
    root=insertNode(root ,1);
   root= insertNode(root,4);
   root= insertNode(root,7);
   root= insertNode(root,10);
   root= insertNode(root,11);
   root= insertNode(root,2);
   root= insertNode(root,6);
   root= insertNode(root,15);

    printTree(root);
}