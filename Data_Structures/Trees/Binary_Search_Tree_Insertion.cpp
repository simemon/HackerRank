/*
https://www.hackerrank.com/challenges/binary-search-tree-insertion
*/
/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
    node* new_node = (node*) malloc(sizeof(node)); 
    new_node -> left = NULL;
    new_node -> right = NULL;
    new_node -> data = value;
    
    node* traverse = root;
    
    if(root == NULL)
    {
        return new_node;
    }
    while(1)
    {
        if(value >= traverse -> data)    // go to right
        {
            if(traverse -> right != NULL)
                traverse = traverse -> right; 
            else
            {
                traverse -> right = new_node;
                break;
            }
        }
        else
        {
            if(traverse -> left != NULL)
                traverse = traverse -> left; 
            else
            {
                traverse -> left = new_node; 
                break;
            }
        }
    }

   return root;
}
