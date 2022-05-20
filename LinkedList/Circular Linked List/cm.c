#include "cll.h"

int main()
{
    node *head = NULL;
    append(&head, 5);
    append(&head, 60);
    append(&head, 5);
    append(&head, 60);
    // add(&head, 9, 5);
    del(&head, 4);
    traverse(head);
}