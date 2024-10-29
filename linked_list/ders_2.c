#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Linked list
struct node
{
    int data;
    struct node *next;
};

// Head ve Tail
struct node *head = NULL;
struct node *tail = NULL;

// addNode Listenin sonuna eleman ekleme
int addNode(int data)
{
    // Linked list boş ise
    if (head == NULL)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        // Constructor muhabbetine benziyor
        new->next = NULL;
        head = tail = new;
    }
    else
    {
        // Linked listin dolu olma durumu,
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;
        tail->next = new;
        tail = new;
    }

    return 1;
};

// Listenin başına eleman ekleme
int addNodeHead(int data)
{
    // Linked list boşsa
    if (head == NULL)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;
        head = tail = new;
    }
    else
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = head;
        head = new;
    }
}

// Yazdırma
int print()
{
    // Liste null değerini görene kadar tüm değerlere erişim sağlayabiliriz çünkü listenin sonu null
    struct node *temp = head;
    printf("Liste : ");

    while (temp != NULL)
    {
        printf("%d - ", temp->data);
        temp = temp->next;
    }

    printf("\n");

    return 1;
}

// Eleman Silme
int delete(int data)
{
    struct node *prev = NULL;
    struct node *index = head;

    // Linked list boş ise
    if (head == NULL)
    {
        printf("Linked list boş\n");
        return 1;
    }

    // Eğer aradığımız data ilk elemansa
    if (head->data == data)
    {
        // Önceki değeri tutuyoruz
        struct node *temp = head;
        // Sonraki değere geçiyoruz
        head = head->next;
        // önceki değeri yani ilk değerimizi siliyoruz
        free(temp);
        return 1;
    }

    while (index != NULL && index->data != data)
    {
        prev = index;
        index = index->next;
    }
    if (index == NULL)
    {
        printf("Silinecek eleman bulunamadı.\n");
        return 1;
    }

    prev->next = index->next;
    if (tail->data == data)
    {
        tail = prev;
    }

    free(index);
    return 1;
}

int main()
{
    addNode(10);
    addNode(20);
    addNode(30);

    addNodeHead(16);
    addNodeHead(7);
    addNode(40);

    // Kontrol
    print();

    delete (7);
    print();
    delete (50);
    print();
    delete (40);
    print();
    delete (30);
    print();
    delete (10);
    print();
    delete (20);
    print();
    delete (16);
    print();
    delete (2);
    print();
    addNode(10);
    print();

    return 1;
}