//https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1?page=1&category=Tree&sortBy=submissions

/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
void traverse(Node *root,vector<int>&v,int level)
{
    if(root==NULL)
        return;
    if(level==v.size())
    {
        v.push_back(root->data);
    }
    
    traverse(root->left,v,level+1);
    traverse(root->right,v,level+1);
}
//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>v;
   traverse(root,v,0);
   return v;
}
