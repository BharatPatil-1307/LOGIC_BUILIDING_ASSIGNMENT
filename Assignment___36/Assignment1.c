#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first , int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void Reverse(PNODE first)
{
    int iRev = 0, iDigit = 0, iNo = 0;

    while(first != NULL)
    {
        iNo = first->data;
        iRev = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = (iRev * 10)+ iDigit;
            iNo = iNo / 10;

        }
        printf("Reverse Digits : %d\n",iRev);
        first = first->next;
    }
    printf("\n");
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d |->",first->data);
        first = first ->next;
    }
    printf("NULL\n");
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 55);
    InsertFirst(&head, 40);
    InsertFirst(&head, 33);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);
    Display(head);
    Reverse(head);
    return 0;
}