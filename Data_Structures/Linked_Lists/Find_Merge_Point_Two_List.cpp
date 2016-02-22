/*
https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists
*/

/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int length(Node* head)
{
    Node* temp = head;
    int count = 0;
    while(temp)
    {
        count++;
        temp = temp -> next;
    }
    return count;
}

Node* move(Node* head, int count)
{
    int i = 0;
    while(i< count)
    {
        head = head -> next;
        i++;
    }
    return head;
}

int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    int l1 = length(headA);
    int l2 = length(headB);
    if(l1 > l2)
    {
        headA = move(headA, l1-l2);
    }
    else if(l1 < l2)
    {
        headB = move(headB, l2-l1);
    }
    while(headA && headB)
    {
        if(headA -> data == headB -> data)
            return headA -> data;
        headA = headA -> next;
        headB = headB -> next;
    }
    return -1;
}
