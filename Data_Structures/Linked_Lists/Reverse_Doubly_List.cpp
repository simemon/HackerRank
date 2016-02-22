/*
https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list
*/

/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
    Node* curr = head;
    if(!head || !head -> next)
        return head;
    Node* temp;
    while(curr)
    {
        temp = curr -> prev;
        curr -> prev = curr -> next;
        curr -> next = temp;
        curr = curr -> prev;
    }
    //if(temp)
        return temp -> prev;
}
