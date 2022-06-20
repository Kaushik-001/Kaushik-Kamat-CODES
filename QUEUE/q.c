#include <stdio.h>
#include <stdlib.h>

// #define Size 100
typedef struct Queue

{
    int *arr;
    int front, rear;
    int size;
}Q;

void init(Q *);
int is_empty(Q *);
int is_full(Q *, int);
void enqueue(Q *, int, int);
int dequeue(Q *, int);

int main()
{
    Q s;
    int size,n;
    // printf("Enter the size of the Queue:");
    // scanf("%d", &size);
    init(&s);
    for(int i = 0;i<s.size; i++)
    {
        printf("Enter the %d element " , i+1);
        scanf("%d",&n);
        enqueue(&s,n,s.size);
    }
    // dequeue(&s);
    // enqueue(&s, 5, s.size);
    // enqueue(&s, 8, s.size);
    // enqueue(&s, 6, s.size);
    // enqueue(&s, 5, s.size);

    printf("The dequeued element is %d ", dequeue(&s, s.size));
    printf("\nThe dequeued element is %d ", dequeue(&s, s.size));
    printf("\nThe dequeued element is %d ", dequeue(&s, s.size));
    printf("\nThe dequeued element is %d ", dequeue(&s, s.size));
    printf("\nThe dequeued element is %d ", dequeue(&s, s.size));
    

    enqueue(&s,9,size);
    enqueue(&s,7,size);

    printf("\nThe dequeued element is %d ",dequeue(&s,size));

    printf("\nThe dequeued element is %d ",dequeue(&s,size));
    

    return 0;
}

// initialize function

void init(Q *ptr)
{   
    ptr->size = 10;
    ptr->arr = (int *)malloc(sizeof(Q));
    ptr->front = ptr->rear = -1;
}

// is empty function

int is_empty(Q *ptr)
{
    if (ptr->front == -1 && ptr->rear == -1)
        return 1;
    else
        return 0;
}

// is full function

int is_full(Q *ptr, int size)
{
    if ((ptr->front == 0 && ptr->rear == size - 1) || (ptr->front == ptr->rear + 1))
        return 1;
    else
        return 0;
}

// insert or enqueue function

void enqueue(Q *ptr, int data, int size)
{
    if (is_full(ptr, size) == 1)
        return;
    else
    {
        if (ptr->front == -1)
            ptr->front = 0;
        if (ptr->rear == size - 1)
            ptr->rear = 0;
        else
        {
            ++ptr->rear;
            ptr->arr[ptr->rear] = data;
        }
    }
}

// delete or dequeue fucntion

int dequeue(Q *ptr, int size)
{
    int temp;
    if (is_empty(ptr) == 1)
        return 0;
    else
    {
        temp = ptr->arr[ptr->front];
        if (ptr->front == ptr->rear)
            ptr->front = ptr->rear = -1;
        else if (ptr->front == size - 1)
            ptr->front = 0;
        else
            ptr->front++;
    }
    return temp;
}
