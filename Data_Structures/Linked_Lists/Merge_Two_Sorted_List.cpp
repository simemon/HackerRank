/*
https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists
*/

/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *list1, Node* list2)
{
	if(!list1 && !list2)
    	return NULL;
  	if(!list1)
      return list2;
  	if(!list2)
      return list1;
  	
  	Node* new_head = NULL;
  	if(list1 -> data <= list2 -> data)
    {
      new_head = list1;
      list1 = list1 -> next;
    }
  	else
    {
      new_head = list2;
      list2 = list2 -> next;
    }
  	Node* traverse = new_head;
  	while(list1 && list2)
    {
      if(list1 -> data <= list2 -> data)
      {
        traverse -> next = list1;
        traverse = list1;
        list1 = list1 -> next;
      }
      else
      {
          traverse -> next = list2;
          traverse = list2;
          list2 = list2 -> next;
      }
    }
    if(list1)
        traverse -> next = list1;
    else
        traverse -> next = list2;
    return new_head;
}