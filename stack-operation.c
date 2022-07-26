#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int top = -1;

void push(int data)
{
  if (top == MAX - 1)
  {
    printf("Stack is full\n");
    return;
  }
  top++;
  stack_arr[top] = data;
}

int pop()
{
  int value;
  if (top == -1)
  {
    printf("stack is empty\n");
    exit(1);
  }
  value = stack_arr[top];
  top--;
  return value;
}

int peep()
{
  if (top == -1)
  {
    printf("stack is empty\n");
    exit(1);
  }
  return stack_arr[top];
}

void update(int value)
{
  stack_arr[top] = value;
  printf("your value is updated\n");
}

void display()
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
    printf("%d ", stack_arr[i]);
  }
  printf("\n");
}

void fact()
{
    int i,n;
    printf("\nEnter an number: ");
    scanf("%d",&n);
    
    for(i=2;i<=n;++i){
        push(peep() * i);
    }
    printf("Factorial: %d\n", peep());
}

int main()
{
  int choice, data, index, value;

  while (1)
  {
    printf("==============\n");
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.peek\n");
    printf("4.update\n");
    printf("5.print\n");
    printf("6.print factorials\n");
    printf("7.exit\n");
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
      printf("Deleted date is: %d\n", pop());
      break;
    case 3:
      printf("Your top most data is: %d\n", peep());
      break;
    case 4:
      printf("Enter the new value\n");
      scanf("%d",&value);
      update(value);
      break;
    case 5:
      display();
      break;
    case 6:
      fact();
      break;
    case 7:
      exit(0);
    default:
      printf("Invalid Choice \n");
    }
  }
  
  return 0;
}
