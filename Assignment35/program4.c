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

int DisplaySecondGreater(PNODE first)
{
    int iCnt = 0;
    PNODE temp = first;
    int iGreater = 0;
    int iSecondGreat = 0;
    while(temp != NULL)
    {
        if((temp ->data) > iGreater)
        {
            iSecondGreat = iGreater;
            iGreater = temp -> data;
        }
        temp = temp ->next;
    }

   
    return iSecondGreat;
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

    iRet = DisplaySecondGreater(head);
    printf("%d is the Second Greatest Number",iRet);

    return 0;
}