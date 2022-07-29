#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int stackA[MAX];
char stackB[MAX];
int top_1 = -1;
int top_2 = -1;

void push_into_A(int data)
{
    if (top_1 == MAX - 1)
    {
        printf("Stack is full\n");
        return;
    }
    top_1++;
    stackA[top_1] = data;
}

int pop_from_A()
{
    int value;
    if (top_1 == -1)
    {
        printf("stack is empty\n");
        exit(1);
    }
    value = stackA[top_1];
    top_1--;
    return value;
}

void display_A()
{
    int i;
    if (top_1 == -1)
    {
        printf("stack is empty\n");
        return;
    }
    printf("=======stack A=======\n");
    for (i = top_1; i >= 0; i--)
    {
        printf("%d ", stackA[i]);
    }
    printf("\n");
}
void display_B()
{
    int i;
    if (top_2 == -1)
    {
        printf("stack is empty\n");
        return;
    }
    printf("=======stack B=======\n");
    for (i = top_2; i >= 0; i--)
    {
        printf("%d ", stackB[i]);
    }
    printf("\n");
}

void copy_A_to_B()
{
    for (int i = top_1; i >= 0; i--)
    {
        top_2++;
        stackB[top_2] = pop_from_A();

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
            push_into_A(data);
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
