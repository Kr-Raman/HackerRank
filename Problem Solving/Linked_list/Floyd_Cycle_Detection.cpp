/*
    This is Floyd's Cycle Detection Algorithm

    which says that use two pointer 
        where slow pointer moves single step
        while fast pointer moves double step ahead
    
    there will come one node where they will collide (will meet) which will prove that the llist is having a Cycle
    
*/

bool has_cycle(SinglyLinkedListNode* head) {
 //int flag = false;
 SinglyLinkedListNode * slow = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode)); 
 SinglyLinkedListNode * fast = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode)); 
 
 //FLOYD's CYCLE FINDING ALGORITHM
 slow = head;
 fast = head;
 while(slow && fast && fast->next)
 {
     slow = slow->next;
     fast= fast->next->next;
     if(slow == fast)
     {
         return 1;
     }   
 }
 
return 0;
}