#include <stdio.h>
#include <stdlib.h>

typedef struct st
{
    int data;
    struct st *next;
}Node;

Node *create_node(int value); // function for creating a temporary node
void append(Node **head, int value);// function for appending a new node
void traverse(Node *head); // function to traverse the whole linked list and printing the data present in each node
void delete_node(Node** head, int position);// function for deleting a particular node
int length_of_ll(Node** head);// function for calculating the length of linked list
void insert_at(Node** head , int position , int data);// function for inserting at nth position
void insert_after(Node** head , int position,int data); // function for inserting after nth position
void insert_before(Node** head , int position , int data); // function for inserting before nth position