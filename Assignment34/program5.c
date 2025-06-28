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

int SmallestElement(PNODE first)
{
    PNODE temp = first;
    int iSmall = temp ->data;

    while (temp != NULL)
    {
        if (temp->data < iSmall)
        {
              iSmall = temp -> data;
        }
        temp = temp->next;
  
    }

    return iSmall;
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InSertAtFirst(&head, 11);
    InSertAtFirst(&head, 21);
    InSertAtFirst(&head, 151);
    InSertAtFirst(&head, 51);
    InSertAtFirst(&head, 101);
    InSertAtFirst(&head, 121);
    InSertAtFirst(&head, 51);
    

    iRet = SmallestElement(head);
    printf("Smallest elements is : %d\n", iRet);

    return 0;
}
