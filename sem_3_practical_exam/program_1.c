#include <stdio.h>
#define SIZE 50

int stack[SIZE];
int top = -1;

void push(int data){
    if(top == SIZE -1){
        printf("\noverflow");
    }
    top = top + 1;
    stack[top] = data;
    printf("\nvalue is inserted");
}
void pop(){
    if(top == -1){
        printf("\nunderflow");
    }
    printf("\nYour value %d is deleted",stack[top]);
    top--;
}

void display()
{
  int i;
  if (top == -1)
  {
    printf("underflow");
    return;
  }
  for (i = top; i >= 0; i--)
  {
    printf("%d ", stack[i]);
  }
  printf("\n");
}

int main(){
    int data, choice;

    do
    {
        printf("\n1.push");
        printf("\n2.pop");
        // printf("\n3.peep");
        printf("\n3.display");
        printf("\n4.exit");

        printf("\nEnter Your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter Your value: ");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nEnter valide input");
            break;
        }
    } while (choice!=4);
    
    return 0;
}