/*
https://www.hackerrank.com/challenges/reverse-a-linked-list
*/

/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
   if(!head)
       return head;
   Node* prev =  NULL;
   Node* curr = head;
   Node *next;
   while(curr != NULL)
   {
       next = curr -> next;
       curr -> next = prev;
       prev =  curr;
       curr = next;
   }
   return prev;
}

