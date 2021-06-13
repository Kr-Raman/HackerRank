#include <bits/stdc++.h>
using namespace std;
 
 struct Node
 {
     struct Node * next;
     int data;
 };
 struct Node * start = NULL;

 
 void insertAtLast( int data)
 {
     struct Node * temp = new Node();
     struct Node * traverse = new Node();
    
     traverse = start;

     if(traverse == NULL)
     {
         traverse = temp;
         temp->next = NULL;
         temp->data = data;
         start = temp;
         
     }
     else
     {
         while (traverse->next != NULL)
         {
             traverse = traverse->next;
         }
         traverse->next = temp;
         temp->next = NULL;
         temp->data = data; 
         
     }
     
 }
 void insertAtBeginning (int data)
 {
     struct Node * temp = new Node();
     struct Node * ptr = new Node();

    ptr = start;
     if(ptr ==NULL)
     {
         ptr = temp ;
         temp ->data = data;
         temp->next = NULL;
         start = temp;
     }
     else
     {
         start = temp;
         temp->next = ptr;
         temp->data = data;

     }
     
 }
 void insertAtPosition(int data , int position)
 {
     struct Node * temp = new Node();
     struct Node * ptr = new Node();
     ptr= start;

     if(ptr == NULL)
     {
         start = temp;
         temp->data = data;
         temp->next = NULL;
     }
     else
     {
         for(int i = 0 ; i<position -1;i++)
         {
             ptr = ptr->next;
         }
         temp->next =ptr->next;
         ptr->next = temp;
         temp->data = data;
          
     }
     

 }
 void reversePrintList(struct Node *head)
 {
     if (head==NULL)
     {
         cout<<"The Linked List is empty"<<endl;
     }
     else
     {
         reversePrintList(head->next);
         cout<<head->data<<" ";
     }
     cout<<endl;
     
 }

 void PrintList (struct Node * head)
 {
     
     if(head == NULL)
     {
         cout<<"Linked List is empty";
     }
     else
     {
         while (head)
         {
             cout<<head->data<<" ";
             head = head->next;
         }
         
     }
     
 }

int main(int argc, const char** argv) {
    
    insertAtLast(1);
    insertAtLast(3);
    insertAtBeginning(10);
    insertAtPosition(2,2);
    insertAtLast(3);
    insertAtLast(4);
    insertAtBeginning(40);
    insertAtLast(5);
    PrintList(start);
    reversePrintList(start);


    return 0;
}