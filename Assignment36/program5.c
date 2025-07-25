#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn ->data = no;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }

}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("%d\n",first->data);
        first = first ->next;
    }
}

int Greatest(PNODE first)
{
   int Gre = first -> data;

   while(first != NULL)
   {
    if((first -> data) > Gre)
    {
        Gre = first ->data;
    }
    first = first->next;
   }

   return Gre;
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);


    Display(head);

    iRet = Greatest(head);
    printf("%d",iRet);

    return 0;
}