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

int Sum(PNODE first)
{
    int iCnt = 0;
    PNODE temp = first;
    int iSum = 0;
    while(temp != NULL)
    {
        iSum = temp ->data + iSum;
        
        temp = temp ->next;
    }

    return iSum;
    
}

int main() {
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head, 11);
    InsertLast(&head, 28);
    InsertLast(&head, 17);
    InsertLast(&head, 41);
    InsertLast(&head, 6);
    InsertLast(&head, 89);


    iRet = Sum(head);
    printf("%d is the addition",iRet);

    return 0;
}