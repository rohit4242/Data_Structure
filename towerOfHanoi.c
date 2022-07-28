#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int stackA[MAX];
char stackB[MAX];
int top = -1;
int temp = -1;

void push_into_A(int data)
{
    if (top == MAX - 1)
    {
        printf("Stack is full\n");
        return;
    }
    top++;
    stackA[top] = data;
}

int pop_from_A()
{
    int value;
    if (top == -1)
    {
        printf("stack is empty\n");
        exit(1);
    }
    value = stackA[top];
    top--;
    return value;
}

void display_A()
{
    int i;
    if (top == -1)
    {
        printf("stack is empty\n");
        return;
    }
    printf("==============\n");
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stackA[i]);
    }
    printf("\n");
}
void display_B()
{
    int i;
    if (top == -1)
    {
        printf("stack is empty\n");
        return;
    }
    printf("==============\n");
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stackB[i]);
    }
    printf("\n");
}

void copy_A_to_B()
{
    for (int i = top; i >= 0; i--)
    {
        temp++;
        stackB[temp] = pop();

    }
    printf("copy succesfull\n");

}

int main()
{
    int choice, data;

    while (1)
    {
        printf("==============\n");
        printf("1.push into Stack A\n");
        printf("2.copy stack A into B\n");
        printf("3.Display A\n");
        printf("4.Display B\n");
        printf("5.exit\n");
        printf("==============\n");

        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter your data:\n");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            copy_A_to_B();
            break;
        case 3:
            display_A();
            break;
        case 4:
            display_B();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Choice \n");
        }
    }

    return 0;
}
