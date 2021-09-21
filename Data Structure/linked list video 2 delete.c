#include<stdio.h>
#include<stdlib.h>

 typedef struct node Node;

 struct node
 {
     Node *next;
 };

 Node *remove_node(Node *head, Node *node)
 {
     if (node == head)
     {
         head == node->next;
         free(node);
         return head;
     }

     Node *current_node = head;
     while (current_node != NULL)
     {
         if(current_node->next == node)
         {
             break;
         }
         current_node = current_node->next;

     }

     if(current_node == NULL)
     {
         return head;
     }
     current_node->next = node->next;
     free(node);
     return head;
 }
