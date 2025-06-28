#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InSertAtFirst(PPNODE first, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

int Sum(PNODE first)
{
    PNODE temp = first;
    int iSum = 0;
   

    while (temp != NULL)
    {
        iSum = iSum + temp ->data;
        temp = temp -> next;
    }

    return iSum;
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InSertAtFirst(&head, 11);
    InSertAtFirst(&head, 21);
    InSertAtFirst(&head, 51);
    InSertAtFirst(&head, 101);
    InSertAtFirst(&head, 121);
    InSertAtFirst(&head, 51);
    InSertAtFirst(&head, 151);

    iRet = Sum(head);

    printf("Summation is: %d\n", iRet);

    return 0;
}
