//adding an element at begining of the linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;
    struct node *link;
}node;
void addElementAtBeg(node **head,int data);
int main()
{
    node *head=(node*)malloc(sizeof(node));
    head->data=1;
    head->link=NULL;

    node *ptr=(node*)malloc(sizeof(node));
    ptr->data=2;
    ptr->link=NULL;
    head->link=ptr;

    ptr=(node*)malloc(sizeof(node));
    ptr->data=3;
    ptr->link=NULL;
    head->link->link=ptr;

    addElementAtBeg(&head,0);
    ptr=head;
    while (ptr!=NULL)
    {
        printf("data=%d\n",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}

void addElementAtBeg(node **head,int data){
    node *temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->link=*head;
    *head=temp;
}
