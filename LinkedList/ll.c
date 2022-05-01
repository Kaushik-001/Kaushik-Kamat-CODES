#include "ll.h"

Node *create_node(int value)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = value;
    temp->next = NULL;

    return temp;
}

void append(Node **head, int value)
{

    Node *temp = create_node(value);

    Node *current = *head;

    if (*head == NULL)
    {
        *head = temp;
        return;
    }

    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = temp;
}

void traverse(Node *pthead)
{
    while (pthead != NULL)
    {
        printf("%d ", pthead->data);
        pthead = pthead->next;
    }
    printf("\n");
}

void delete_node(Node **head, int position)
{
    Node *temp, *new_node;
    int i = 1;
    temp = *head;
    while (i < position - 1)
    {
        temp = temp->next;
        i++;
    }
    new_node = temp->next;
    temp->next = new_node->next;
    free(new_node);
}

int length_of_ll(Node **head)
{
    Node *temp = *head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// Inserting at nth position

void insert_at(Node **head, int position, int data)
{
    if (position > length_of_ll(head))
    {
        printf("Insertion of Node not possible");
    }
    else
    {
        Node *temp, *new_node;
        int i = 1;
        temp = *head;
        while (i < position -1)
        {
            temp = temp->next;
            i++;
        }
        new_node = (Node *)malloc(sizeof(Node));
        new_node->data = data;
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

// Inserting after nth position

void insert_after(Node **head, int position, int data)
{
    if (position > length_of_ll(head))
    {
        printf("Insertion not possible");
    }
    else
    {
        Node *temp, *new_node;
        int i = 1;
        temp = *head;
        while (i < position)
        {
            temp = temp->next;
            i++;
        }
        new_node = (Node *)malloc(sizeof(Node));
        new_node->data = data;
        new_node->next = temp->next;
        temp->next = new_node;
    }
}

// Inserting before nth position

void insert_before(Node **head, int position, int data)
{
    if (position > length_of_ll(head))
    {
        printf("Insertion not possible");
    }
    else
    {
        Node *temp, *new_node;
        int i =1;
        temp = *head;
        while (i< position -2)
        {
            temp = temp->next;
            i++;
        }
        new_node = (Node *)malloc(sizeof(Node));
        new_node->data = data;
        new_node->next = temp->next;
        temp->next = new_node;
    }
}
