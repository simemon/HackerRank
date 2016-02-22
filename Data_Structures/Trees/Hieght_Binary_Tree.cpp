/*
https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree
*/


/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root)
{
  int lh = 0, rh = 0;
  if(root != NULL)
  {
      lh = 1 + height(root -> left);
      rh = 1 + height(root -> right);
  }
  return (lh>rh?lh:rh);
}
  
