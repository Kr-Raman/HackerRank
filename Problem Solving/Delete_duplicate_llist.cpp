/*
This function can be used to Delete node with dubplicate value
GIVEN
        a linked list in sorted manner in inc. order
OUTPUT
        a linked list with no duplicate value

PROCEDURE
        function takes the Head pointer as an Argument
        Two pointers are required for the traversal and for maintaining the interity of the llist
        RETURN 
        a pointer to the head Node of the linked list
*/


SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {

    SinglyLinkedListNode * ptr1 = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    SinglyLinkedListNode * ptr2 = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    ptr1 = llist;
    ptr2 = llist->next;
    while(ptr2!=NULL)
    {
        
        if(ptr1->data == ptr2->data)
        {
            
            ptr1->next = ptr2->next;
            ptr2=ptr2->next;
            
            
        }
        else
        {
            ptr1 = ptr2;
            ptr2 = ptr2->next;
        }
    }
    return llist;
}