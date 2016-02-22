/*
https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle
*/

/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
   // Complete this function
   // Do not write the main method
   Node* slow = head;
   Node* fast = head;
   while(fast && fast -> next)
   {
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast)
            return 1;
   }
   return 0;
}

