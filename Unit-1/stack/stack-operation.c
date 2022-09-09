#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int stack_arr[MAX];
int top = -1;
char str_stack[MAX];

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
  int i,value;
  printf("Enter your index: ");
  scanf("%d",&i);
  if (top-i+1 < 0)
  {
    printf("stack is empty\n");
    exit(1);
  }
  stack_arr[top-i+1] = value;
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

void fact1()
{
  int fact = 1, num;
  printf("\nEnter Your Number: ");
  scanf("%d", &num);

  while (num != 0)
  {
    push(fact *= num);
    num--;
  }

  printf("\nYour factorial is: %d", peep());
}

void fact2()
{
  int n, i, fact = 1;
  printf("Enter your number to calculate:\n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    push(i);
  }

  for (i = 1; i <= n; i++)
  {
    fact = (long)fact * pop();
  }

  printf("\nFactorial of %d = %ld\n", n, fact);
}

void reverse_string(char s)
{
  char str[10];
  int i = 0;

  while (str[i] = !'\0')
  {
  }
}

int main()
{
  int choice, data, index, value;
  char str;

  while (1)
  {
    printf("==============\n");
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.peek\n");
    printf("4.update\n");
    printf("5.print\n");
    printf("6.print factorials 1\n");
    printf("7.print factorials 2\n");
    printf("8.revers string\n");
    printf("9,exit\n");
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
      scanf("%d", &value);
      update(value);
      break;
    case 5:
      display();
      break;
    case 6:
      fact1();
      break;
    case 7:
      fact2();
      break;
    case 8:
      printf("Enter any string: ");
      gets(str);
      reverse_string(str);
      break;
    case 9:
      exit(0);
    default:
      printf("Invalid Choice \n");
    }
  }

  return 0;
}
