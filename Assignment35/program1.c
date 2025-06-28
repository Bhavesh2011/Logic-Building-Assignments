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

bool IsPerfect(int iNo) {
    if (iNo <= 1) {
        return false;
    }
    int iSum = 1;
    for (int i = 2; i * i <= iNo; i++) {
        if (iNo % i == 0) {
            iSum += i;
            if (i * i != iNo) {
                iSum += (iNo / i);
            }
        }
    }
    return iSum == iNo;
}

void DisplayPerfect(PNODE Head) {
    printf("Perfect numbers in the list: ");
    while (Head != NULL) {
        if (IsPerfect(Head->data)) {
            printf("%d ", Head->data);
        }
        Head = Head->next;
    }
    printf("\n");
}

int main() {
    PNODE head = NULL;

    InsertLast(&head, 11);
    InsertLast(&head, 28);
    InsertLast(&head, 17);
    InsertLast(&head, 41);
    InsertLast(&head, 6);
    InsertLast(&head, 89);

    Display(head);

    DisplayPerfect(head);


    return 0;
}