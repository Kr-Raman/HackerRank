#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node * left , *right = NULL;
};
Node * createNode(int data)
{
    Node * node = new Node();
    node->key = data;
    node->right= NULL; 
     node->left =NULL;

     return node;
}
vector<int>tree;
void Printtree(Node * root)
{
    if(!root)
    {
        return;
    }
    Printtree(root->left);
    //Using vector to store the Inorder of Tree;
    tree.push_back(root->key);
    Printtree(root->right);
}

//Iterative method to Print the inorder of the tree;
 vector<int> inorderTraversal(Node* root) {
        vector<int> ret;
        if (!root) return ret;
        stack<Node*>st;
        Node* p = root;
        while (p || st.size()){
            if (p){
                st.push(p);
                p = p->left;
            }
            else{
                ret.push_back(st.top()->key);
                p = st.top()->right;
                st.pop();
            }
        }
        return ret;
    }
int main()
{
    Node * root = NULL;
    root= createNode(10);
    root->left = createNode(8);
    root->right = createNode(11);
    root->left->left= createNode(7);
    root->left->right = createNode(9);
    // Printtree(root);
    vector<int>ret;
    ret = inorderTraversal(root);
    for(int i=0 ; i<ret.size();i++)
    {
        cout<<ret[i]<<" ";
    }

    return 0;
}