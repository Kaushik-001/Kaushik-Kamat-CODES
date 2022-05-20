#include "dll.h"

int main()
{
    Node *head = NULL, *tail = NULL;
    Node *pos;

    add_end(&head, &tail,  5);
    add_end(&head, &tail, 10);
    add_end(&head, &tail, 50);
    add_end(&head, &tail, 15);
    add_end(&head, &tail, 20);
    add_end(&head, &tail, 25);
    add_begin(&head, &tail, 60);

    traverse_next(head);
    traverse_prev(tail);

    // pos = search_by_pos(head, 3);
    add_in_between_after(head,6, 90);
    add_in_between_before(head,6,100);
    // delete_in_betwn_after(head , 4);
    delete_in_betwn_before(head ,5);

    traverse_next(head);

    return 0;
}