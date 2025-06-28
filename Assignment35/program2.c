#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertLast(PPNODE first, int no) {
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    if (newn == NULL) {
        return;
    }
    newn->data = no;
    newn->next = NULL;

    if (*first == NULL) {
        *first = newn;
    } else {
        PNODE temp = *first;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void DisplayPrime(PNODE first)
{
    int iCnt = 0;
    PNODE temp = first;
    while(temp != NULL)
    {

        if(((temp ->data) % 2) == 0 || ((temp -> data) % 3) == 0 )
        {
            printf("%d is prime number\n",temp ->data);
        }
    temp = temp ->next;
    }
    
}

int main() {
    PNODE head = NULL;

    InsertLast(&head, 11);
    InsertLast(&head, 28);
    InsertLast(&head, 17);
    InsertLast(&head, 41);
    InsertLast(&head, 6);
    InsertLast(&head, 89);

    DisplayPrime(head);


    return 0;
}