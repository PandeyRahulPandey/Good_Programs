#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node{
        int data;
        struct node *next;
    };
     struct node *head,*newnode,*temp;
     head=0;
     int choice,count=0;
     while(choice){
        newnode=(struct node*) malloc (sizeof (struct node));
        printf("enter the data");
        printf("\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }
        else  
        {
            temp->next=newnode;
             temp=newnode;
        }
        printf("do you want to cotinue (0/1):");
        scanf("%d",&choice);     
     }
     temp=head;
     printf("\n\n");
     while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
        count++;
     }
     printf("\n\n");
     printf("the number of nodes in the linked list is %d",count);
     return 0;
}