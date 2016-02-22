/*
https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list
*/

/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    if(!head)
        return NULL;
    if(position == 0)
    {
        Node* temp = head -> next;
        free(head);
        return temp;
    }
    
  Node* start = head;
  int count = 0;
  Node* prev;
  while(start &&  count < position)
  {
    prev = start;  
    start = start -> next;    
    count++;
  }
  
  if(start)  
  {
      prev -> next = start -> next;
      free(start);
  }
  return head;
}
