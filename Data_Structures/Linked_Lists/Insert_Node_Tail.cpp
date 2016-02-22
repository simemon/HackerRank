/*
https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list
*/


/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node* new_node = (Node*) malloc (sizeof(Node));
    new_node -> data = data;
    new_node -> next = NULL;
    Node *traverse = head;
    if(!head)
    {
        head = new_node;
        return head;
    }
    while(traverse -> next != NULL)
    {
        traverse = traverse -> next;    
    }
    traverse -> next = new_node;
    return head;
}
