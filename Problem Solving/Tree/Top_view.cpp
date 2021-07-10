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
void print_topview(Node * root)
{
    if(root == NULL)
        return;
    queue<Node *>q;
    map<int,int> m ;
    int h_dist = 0;
    root->h_dist = h_dist;
    q.push(root);
    cout<<"Top view of the given Tree :"<<endl;

    while(q.size()){
        h_dist = root->h_dist;
        if(m.count(h_dist)== 0)
        {
            m[h_dist] = root->key;
        }
        if(root->left)
        {
            root->left->h_dist = h_dist -1;
            q.push(root->left);
        }
        if(root->right)
        {
            root->right->h_dist = h_dist+1;
            q.push(root->right);

        }
        q.pop();
        root=q.front();

    }
    for(auto i = m.begin();i != m.end();i++)
    {
        cout<<i->second<< " ";
    }
}
int main()
{
    Node * root = NULL;
    root = insertNode(root ,11);
    root=insertNode(root ,23);
   root= insertNode(root,35);
   root= insertNode(root,47);
   root= insertNode(root,59);
   root= insertNode(root,68);
   root= insertNode(root,2);
   root= insertNode(root,6);
   root= insertNode(root,15);


    printTree(root);

    print_topview(root);
}