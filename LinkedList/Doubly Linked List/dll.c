#include "dll.h"

Node *create_node(int value)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = value;
    temp->next = NULL;
    temp->prev = NULL;

    return temp;
}

void add_end(Node **head, Node **tail, int value)
{
    Node *new_node = create_node(value);

    if (*head == NULL)
    {
        *head = new_node;
        *tail = new_node;
        return;
    }

    new_node->prev = *tail;
    (*tail)->next = new_node;
    *tail = new_node;
}

void add_begin(Node **head, Node **tail, int value)
{
    Node *new_node = create_node(value);

    if (*head == NULL)
    {
        *head = new_node;
        *tail = new_node;
        return;
    }

    new_node->next = *head;
    (*head)->prev = new_node;
    *head = new_node;
}

void traverse_next(Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void traverse_prev(Node *tail)
{
    while (tail != NULL)
    {
        printf("%d ", tail->data);
        tail = tail->prev;
    }
    printf("\n");
}

void delete_end(Node **tail)
{
    Node *temp = *tail;

    if (*tail == NULL)
        return;

    *tail = (*tail)->prev;
    (*tail)->next = NULL;
    free(temp);
}

void delete_begin(Node **head)
{
    Node *temp = *head;

    if (*head == NULL)
        return;

    (*head)->next->prev = NULL;
    (*head) = (*head)->next;
    free(temp);
}

Node *search_by_pos(Node *head, int position)
{
    int i = 1, count = 1;
    Node *tmp = head;

    if (head == NULL)
        return NULL;

    if (position <= 0)
    {
        printf("Invalid Position\n");
        return NULL;
    }

    while (head->next != NULL)
    {
        head = head->next;
        count++;
    }

    if (position > count)
    {
        printf("Invalid Position\n");
        return NULL;
    }

    for (i = 1; i < position; i++)
    {
        tmp = tmp->next;
    }

    return tmp;
}

void add_in_between_after(Node *head, int posn, int val)
{
    Node *temp = create_node(val);
    Node *prev_node = NULL;

    prev_node = search_by_pos(head, posn);

    temp->prev = prev_node;
    temp->next = prev_node->next;
    temp->next->prev = temp;
    prev_node->next = temp;
}

void add_in_between_before(Node *head, int posn, int val)
{
    Node *tmp = create_node(val);
    Node *target_node = NULL;

    target_node = search_by_pos(head, posn);

    tmp->prev = target_node->prev;
    tmp->next = target_node;
    target_node->prev->next = tmp;
    target_node->prev = tmp;
}

void delete_in_betwn_after(Node *head, int pos)
{
    Node *target_node = NULL;
    Node *tmp;

    target_node = search_by_pos(head, pos);
    tmp = target_node->next;
    target_node->next = target_node->next->next;
    free(tmp);
}

void delete_in_betwn_before(Node *head, int pos)
{
    Node *target = NULL;
    Node *tmp;

    target = search_by_pos(head, pos);

    tmp = target->prev;
    target->prev = target->prev->prev;
    target->prev->next = target;
    free(tmp);
}