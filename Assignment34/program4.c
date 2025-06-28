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

int LargestElement(PNODE first)
{
    PNODE temp = first;
    int iLarge = 0;

    while (temp != NULL)
    {
        if (temp->data > iLarge)
        {
              iLarge = temp -> data;
        }
        temp = temp->next;
  
    }

    return iLarge;
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
    

    iRet = LargestElement(head);
    printf("Largest elements is : %d\n", iRet);

    return 0;
}
