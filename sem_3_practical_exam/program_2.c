#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head;

void insert_first(int data){
    struct node *new_node;
    new_node = (struct node*) malloc(sizeof(struct node*));
    if(new_node == NULL){
        printf("\nMemory is not allocated");
        return;
    }
    else{
        if(head == NULL){
            new_node->next = NULL;
            new_node->prev = NULL;
            new_node->data = data;
            head = new_node;
        }
        else{
            new_node->data = data;
            new_node->prev = NULL;
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
        printf("\nYour node is inserted");
    }
}

void insert_last(int data){
    struct node *new_node, *temp;
    new_node = (struct node*) malloc(sizeof(struct node*));
    if(new_node == NULL){
        printf("\nMemory is not allocated");
        return;
    }
    else{
        new_node->data = data;
        if(head==NULL){
            new_node->next = NULL;
            new_node->prev = NULL;
            head = new_node;
        }
        else{
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node->prev = temp;
            new_node->next = NULL;
        }
    }
    printf("\nYour node is inserted");
}

void insert_between(int data, int index){
    int i;
    struct node *new_node,*temp;  
    new_node = (struct node *)malloc(sizeof(struct node));  
    if(new_node == NULL){
        printf("\nMemory is not allocated");
        return;
    }
    else  
    {  
        temp=head;  
        for(i=0;i<index-1;i++)  
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("\n invalid location");  
                return;  
            }  
        }  
            new_node->data = data;  
            new_node->next = temp->next;  
            new_node -> prev = temp;  
            temp->next = new_node;  
            temp->next->prev=new_node;  
        printf("\nYour node is inserted");
    }  
}

void display(){
    struct node *temp = head;
    if(head == NULL){
        printf("\nYour List is Empty");
    }
    while(temp != NULL){
        printf("%d --> ",temp->data);
        temp = temp->next;
    }
}

int main(){
    int value, choice,index;

    do{
        printf("\n===============================");
        printf("\n1.Insert First");
        printf("\n2.Insert Last");
        printf("\n3.Insert between");
        printf("\n4.Display List");
        printf("\n5.Exit");
        printf("\n===============================");

        printf("\nEnter Your Choise:");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter Your Value: ");
                scanf("%d",&value);
                insert_first(value);
                break;
            case 2:
                printf("\nEnter Your Value: ");
                scanf("%d",&value);
                insert_last(value);
                break;
            case 3:
                printf("\nEnter Your Value: ");
                scanf("%d",&value);
                printf("\nEnter Your Index: ");
                scanf("%d",&index);
                insert_between(value,index);
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            
            default:
                printf("\ninsert valide input");
        }

    }while (choice!=5);
    
    return 0;
}