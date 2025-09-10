#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node * NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

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

void Display(PNODE first)
{
    PNODE temp = first;

    while(temp != NULL)
    {
        printf("| %d |->",temp->data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

int SearchFirstOcc(PNODE first, int no)
{
    int iPos = 1;

    while(first->data != no)
    { 
        iPos++;
        first = first->next;   
    }

    return iPos;
}

int main()
{
    int iRet = 0;
    PNODE head = NULL;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);
    InsertFirst(&head,51);
    InsertFirst(&head,11);
    InsertFirst(&head,21);

    Display(head);

    iRet = SearchFirstOcc(head,51);

    printf("First Occurance is : %d\n",iRet);

    return 0;
}