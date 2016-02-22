/*
https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list
*/

/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method.
  if(head ==  NULL || head -> next == NULL)
      return head;
  Node *slow = head , *fast = head -> next ;
  while(fast)
  {
    if(slow -> data != fast -> data)
    {
        slow -> next = fast;
        slow = fast;
    }
    fast = fast -> next;
  }
  slow -> next = NULL;
  return head;
}
