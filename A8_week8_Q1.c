// #include<stdio.h>
// #include<stdlib.h>

// struct DoublyLinkedList
// {
//     int data;
//     struct DoublyLinkedList * prev;
//     struct DoublyLinkedList * next;
// };
// struct DoublyLinkedList * CreateNode(int n)
// {
//     struct DoublyLinkedList * newNodeptr;
//     newNodeptr = (struct DoublyLinkedList *)
//     malloc(sizeof (struct DoublyLinkedList));
//     newNodeptr -> data = n;
//     newNodeptr -> prev = NULL;
//     newNodeptr -> next = NULL;
//     return newNodeptr;
// }

// void initialzeList(
//     struct DoublyLinkedList ** headptr,
//     struct DoublyLinkedList ** tailptr,
//     int n)
// {
//     struct DoublyLinkedList * newNode;
//     newNode = createNode(n);
//     * headptr = newNode;
//     * tailptr = newNode;
//     return;

// }

// void printList(
//     struct DoublyLinkedList * head,
//     struct DoublyLinkedList * tail)
// {
//     struct DoublyLinkedList * curr = head;
//     while (curr != NULL)
//     {
//         if (curr -> next != NULL)
//         {
//             printf("%d,",curr -> data);
//         }
//         else
//         {
//             printf("%d", curr -> data);
//         }
//         curr = curr -> next;      
        
//     }
//     return;
    
// }




// int main()
// {
    
//     return 0;
// }

