#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *new_node; 
struct node *top = NULL;
struct node *temp;


void push(int value)
{
    if(top == NULL)
    {
        new_node = (struct node *) malloc(sizeof(struct node));

        new_node->next = NULL;
        new_node->data = value;
        top = new_node;
    }
    else
    {
        new_node = (struct node *) malloc(sizeof(struct node));

        new_node->next = top;
        new_node->data = value;
        top = new_node;
    }
}

int pop()
{
    int x;
    temp = top;
    if (temp==NULL)
    {
        printf("\nStack is empty");
    }
    temp = temp->next;
    x = top->data;
    free(top);
    top = temp;
    return x;
}

int peep()
{
    if(top == NULL)
    {
        printf("\nStack is empty");
    }
    return top->data;
}

void display()
{
    temp = top;
    if(temp == NULL)
    {
        printf("\nStack is empty");
    }
    while(temp!=NULL)
    {
        printf("\nYour data is: %d",temp->data);
        temp = temp->next;
    }
}

void update(int value)
{
    int val;
    temp = top;
    if(temp == NULL)
    {
        printf("\nStack is empty");
    }
    printf("\nEnter your value to update: ");
    scanf("%d",&val);

    while(temp!=NULL)
    {
        if(val==temp->data)
        {
            top->data = value;
            break;
        }
        printf("\nYour data is not found");
        temp = temp->next;
    }
    
    printf("\nYour data is updated");
}

int main()
{
    int choice,data,value;

    printf("==============\n");
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.peek\n");
    printf("4.update\n");
    printf("5.display\n");
    printf("6,exit\n");
    printf("==============\n");

  while (1)
  {
    printf("\nEnter your choice:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Enter your data:\n");
      scanf("%d", &data);
      push(data);
      break;
    case 2:
      printf("Deleted date is: %d\n", pop());
      break;
    case 3:
      printf("Your top most data is: %d\n", peep());
      break;
    case 4:
      printf("Enter the new value\n");
      scanf("%d", &value);
      update(value);
      break;
    case 5:
      display();
      break;
    case 6:
      exit(0);
    default:
      printf("Invalid Choice \n");
    }
  }
    return 0;
}
