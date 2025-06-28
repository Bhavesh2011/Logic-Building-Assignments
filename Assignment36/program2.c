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

void Pallindrome(PNODE first)
{
    int num = 0, rev = 0, temp = 0;

    while (first != NULL)
    {
        temp = first->data;  
        num = temp;
        rev = 0;

        while (num != 0)
        {
            rev = (rev * 10) + (num % 10);
            num = num / 10;
        }

        if (rev == temp)
        {
            printf("%d is a palindrome\n", temp);
        }

        first = first->next;
    }
}


int main()
{
    PNODE head = NULL;
    InsertFirst(&head,121);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    Pallindrome(head);

    return 0;
}