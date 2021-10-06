#include <stdio.h>
#include <stdlib.h>

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
    
    ptr=head;
    
    while(ptr!=NULL)
    {
        printf("data=%d",ptr->data);
        ptr=ptr->link;
        printf("\n");
    }
  return 0;
}