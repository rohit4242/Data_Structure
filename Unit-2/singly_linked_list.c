#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node  *next;
};

struct node *head;

void addFirst(int data){

    struct node *new_node;
    new_node = (struct node*) malloc(sizeof(struct node*));
    if(new_node == NULL){
        printf("\nMemory is not allocated");
        return;
    }
    new_node->data = data;
    new_node->next = head;
    head = new_node;

    printf("\nYour Node Is Inserted");
}

void addLast(int data){
    struct node *new_node, *temp;
    new_node = (struct node*) malloc(sizeof(struct node*));
    if(new_node == NULL){
        printf("\nMemory is not allocated");
        return;
    }
    else{
        if(head == NULL){
            new_node->next = NULL;
            head = new_node;
            printf("\nYour Node Is Inserted");
        }
        else{
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
            new_node->next = NULL;
            printf("\nYour Node Is Inserted");
        }
    }
}

void addBetween(int data, int index){
    struct node *new_node, *temp;
    new_node = (struct node*) malloc(sizeof(struct node*));
    if(new_node == NULL){
        printf("\nMemory is not allocated");
        return;
    }
    new_node->data = data;
    temp = head;
    for(int i=0;i<index;i++){
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    printf("\nYour Node Is Inserted");

}

void deleteFirst(){
    struct node *temp;

    if(head == NULL){
        printf("Your list is empty");
        return;
    }
    temp = head;
    head = temp->next;
    free(temp);
    printf("\nYour Node Is Deleted");

}
void deleteLast(){
    struct node *temp;

    if(head == NULL){
        printf("Your list is empty");
        return;
    }
   
    temp = head;
    while (temp->next != NULL)
    {
        
    }
    
}
void display(){
    struct node *temp;
    temp = head;
    if(temp == NULL){
        printf("\nNo Element Are There");
    }
    while (temp!=NULL)
    {
        printf("%d-->",temp->data);
        temp = temp->next;
    }
    
}

int main(){

    int value, choice;

    do{
        printf("\n===============================");
        printf("\n1.Insert At Beginning");
        printf("\n2.Insert At Index");
        printf("\n3.Insert At Ending");
        printf("\n4.Delete At Beginning");
        printf("\n5.Delete At Index");
        printf("\n6.Delete At Ending");
        printf("\n7.Display List");
        printf("\n8.Exit");
        printf("\n===============================");

        printf("\nEnter Your Choise:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Your Value: ");
            scanf("%d",&value);
            addFirst(value);
            break;
        case 2:
            printf("\nEnter Your Value: ");
            scanf("%d",&value);
            addLast(value);
            break;
        case 3:
            display();
        default:
            break;
        }

    }while (choice!=8);
    
    return 0;
}
