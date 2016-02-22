/*
https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list
*/

/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
    Node* prev = NULL;
    Node* curr = head;
    Node* new_node = (Node*) malloc (sizeof(Node));
    new_node -> prev = new_node -> next = NULL;
    new_node -> data = data;
    
    if(!head)
        return new_node;
    
    if(data < head -> data)
    {
        new_node -> next = head;
        head -> prev = new_node;
        return new_node;
    }
    
    while(curr)
    {
        if(curr -> data < data)
        {
            prev = curr;
            curr = curr -> next;
        }
        else
            break;
    }
    
    new_node -> prev = prev;
    prev -> next = new_node;
    new_node -> next = curr;
    
    if(curr)
    {
        curr -> prev = new_node;
    }
    return head;
}