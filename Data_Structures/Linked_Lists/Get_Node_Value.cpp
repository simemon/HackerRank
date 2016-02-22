/*
https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail
*/

/*

  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int k)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node* temp = head;
    int i = 0;
    while(temp && i <= k)
    {
        temp = temp -> next;
        i++;
    }
    Node* slow = head;
    while(temp)
    {
        slow = slow -> next;
        temp = temp -> next;
    }
    return slow -> data;
}
