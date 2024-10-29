#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Queue Node
struct node
{
    int data;
    struct node *next;
};

// Front ve Rear
struct node *front = NULL;
struct node *rear = NULL;

// Enqueue (ekleme işlemi)
int enqueue(int data)
{
    if (front == NULL)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;
        front = rear = new;
    }
    else
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;
        rear->next = new;
        rear = new;
    }
}

int print()
{
    struct node *temp = front;

    // Queue boş mu
    if (front == NULL)
    {
        printf("Queue bos\n");
    }

    printf("Queue: ");
    while (front != NULL)
    {
        printf("%d - ", front->data);
        front = front->next;
    }

    printf("\n");
}

// dequeue (silme işlemi)
int dequeue()
{

    // queue boş ise
    struct node *temp = front;
    if (front == NULL)
    {
        printf("Queue bos\n");
        return 1;
    }

    front = front->next;
    free(temp);

    return 1;
}

// main
int main()
{
    enqueue(6);
    enqueue(7);
    enqueue(8);
    enqueue(9);
    print();
    // ilk giren ilk çıkan prensibine uygun çalışır
    dequeue();
    print();
    dequeue();
    print();

    return 1;
}