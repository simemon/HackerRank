/*
https://www.hackerrank.com/challenges/tree-level-order-traversal
*/


/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
#include <queue>

void LevelOrder(node * root)
{
    std::queue<node*> q;
    node* temp;
    
   if(root != NULL)
   {
        q.push(root);
   }
   while(!q.empty())
   {
       root = q.front();
       q.pop();
       cout << root -> data << " ";
       if(root -> left != NULL)
            q.push(root -> left);
        if(root -> right != NULL)
            q.push(root -> right);
   }
}
