#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
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
    
    countNodesAndPrintData(head);
    
  return 0;
}