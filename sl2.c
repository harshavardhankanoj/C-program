// adding an element at the end of the linked list
#include<stdio.h>
#include<stdlib.h>
void addElementAtEnd(struct node *head,int data);
void countNodesAndPrintData(struct node *head);
struct node{
    int data;
    struct node *link;
};
int main() {
    struct node *head=(struct node *)malloc(sizeof(struct node));
    
    head->data=1;
    head->link=NULL;
    printf("data=%d\n",head->data);
    printf("\n");
    
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=2;
    ptr->link=NULL;
    head->link=ptr;
    
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=3;
    ptr->link=NULL;
    head->link->link=ptr;
    
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=4;
    ptr->link=NULL;
    head->link->link->link=ptr; 

    addElementAtEnd(head,20);

    addElementAtEnd(head,21);
    addElementAtEnd(head,22);

    countNodesAndPrintData(head);

  return 0;
}

void addElementAtEnd(struct node *head,int data)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;

    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;
}
void countNodesAndPrintData(struct node *head){
    int count=0;
    int i=0;
    struct node *ptr=NULL;
    ptr=head;
    if(ptr==NULL)
    printf("Empty linked list");
    while(ptr!=NULL)
    {
        count++;
        printf("data[%d]=%d",i,ptr->data);
        i++;
        ptr=ptr->link;
        printf("\n");
    }
    printf("Nodes=%d",count);
}