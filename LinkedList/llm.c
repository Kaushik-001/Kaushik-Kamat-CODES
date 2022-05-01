#include "ll.h"

int main()
{
    Node *head = NULL;

    append(&head, 5);
    append(&head, 60);
    append(&head, 5);
    append(&head, 60);
    append(&head, 5);
    append(&head, 60);
    append(&head, 56);
    append(&head, 57);
    traverse(head);

    int position, data;
 
    // // char buffer;
    printf("Enter the position where you want to delete a node:");
    scanf("%d",&position);

    printf("The linked list after deletion is :\n");
    delete_node(&head,position);
    traverse(head);
    // length_of_ll(&head);
    // printf("Enter the data you want to enter :");
    // scanf("%d", &data);
    // printf("Enter the position after which you want to insert new node :");
    // scanf("%d", &position);
    // printf("The linked list after insertig is : \n");
    insert_after(&head, position, data);
    traverse(head);

    return 0;
}