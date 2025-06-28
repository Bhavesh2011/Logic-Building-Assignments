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

int LastSearchoccur(PNODE first, int no)
{
    PNODE temp = first;
    int iCnt = 0;
    int lastIndex = -1;

    while (temp != NULL)
    {
        if (temp->data == no)
        {
            lastIndex = iCnt;  
        }
        temp = temp->next;
        iCnt++;
    }

    return lastIndex;
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

    iRet = LastSearchoccur(head, 51);

    printf("Element found at position: %d\n", iRet);

    return 0;
}
