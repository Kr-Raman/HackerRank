
// This function can be used to Connect two linked list which sorted in inc order
// if you want to connect list1-> 1,2,10  and list2 -> 3,4,15
// and the output you need is 1,2,3,4,10,15 then this function can do the same
// By creating a new linked list whose header is (head) and pointer is required to traverse along the increasing linked list
//The function takes the head pointer of two sorted linked list as an argumnet
// returns a head pointer to the merged sorted linked list 

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    
    
    SinglyLinkedListNode* head = (SinglyLinkedListNode*) malloc(sizeof(SinglyLinkedListNode));
    SinglyLinkedListNode* ptr = (SinglyLinkedListNode*) malloc(sizeof(SinglyLinkedListNode));
    head = NULL;
    ptr=head;
    
    
    
    while(head1!=NULL &&head2!=NULL)
    {
        if(head == NULL)
        {
            if(head1->data >head2->data)
            {
                head = head2;
                ptr = head;
                head2 = head2->next;
                head->next = NULL;
            }
            else{
                head = head1;
                ptr = head;
                head1 = head1->next;
                head->next = NULL;
            }
            
        }
        else
        {
             if(head1->data >head2->data)
            {
               ptr->next = head2;
               head2 = head2->next;
               ptr = ptr->next;
            }
            else{
               ptr->next = head1;
               head1 = head1 ->next;
               ptr=ptr->next;
            }
        }
    }
    if(head1!=NULL)
    {
    
        ptr->next = head1;
    }
    else
    {
        ptr->next = head2;
    }
    
return head;
}
