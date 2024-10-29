#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Stack
struct node
{
    int data;
    struct node *next;
};

// Top
struct node *top = NULL;

// Stack eleman ekleme
int push(int data)
{
    // Stack boş ise
    if (top == NULL)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;

        top = new;
    }
    else
    {
        // Stack dolu ise
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = top;
        top = new;
    }

    return 1;
}

// Stack eleman yazdırma
int print()
{
    if (top == NULL)
    {
        printf("Stack bos\n");
    }

    struct node *index = top;

    while (index != NULL)
    {
        printf("%d - ", index->data);
        index = index->next;
    }

    printf("\n");
    return 1;
}

// Stack eleman çıkarma
int pop()
{

    if (top == NULL)
    {
        // Stack boşsa
        printf("Stack bos\n");
    }
    struct node *temp = top;
    top = top->next;
    free(temp);

    return 1;
}

// Main
int main()
{
    push(3);
    print();
    push(5);
    print();
    push(7);
    print();
    push(9);
    print();
    push(11);
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    return 1;
}