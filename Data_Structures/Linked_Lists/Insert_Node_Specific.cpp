/*
https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list
*/

/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
  Node* new_node = (Node*) malloc(sizeof(Node));
  new_node -> data = data;
  new_node -> next = NULL;
  int i = 0;
  Node* temp = head;
  Node* prev;
  if(!position)
  {
      new_node -> next = head;
      return new_node;
  }
  while(temp && i < position)
  {
      prev = temp;
      temp = temp -> next;
      i++;
  }
  prev->next = new_node;
  new_node -> next = temp;
  return head;
}
