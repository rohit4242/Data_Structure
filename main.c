#include <stdio.h>
#define MAX 5

int stack_arr[MAX];
int top = -1;

int isFull(){
  if(top == MAX-1)
     return 1;
  else
    return 0;
}

int isEmpty(){
  if(top == -1)
    return 1;
  else 
    return 0;
}

void push(int data){
  if(isFull){
    printf("Stack is overflow");
    return;
  }
  top+=1;
  stack_arr[top] = data;
}

int pop(){
  int value;
  if(isEmpty){
    printf("stack is underflow");
    exit(0);
  }
  value = stack_arr[top];
  top -=1;
  return value;
}

int peek(){
  if(isEmpty){
    printf("stack is underflow");
    exit(1);
  }
  return stack_arr[top];
}

void print(){
  int i;
  if(top == -1)
    printf("stack is underflow");

  for(i = top; i>=0; i--){
     printf("%d ",stack_arr[i]);
}

int main(){
  int choice, data;

  while(1){

    printf("1.push\n");
    printf("2.pop\n");
    printf("3.peek\n");
    printf("4.print\n");
    printf("5.exit\n");

    printf("Enter your choice:\n");
    scanf("%d",&choice);

    switch(choice){
      case 1:
         printf("Enter your data:\n");
         scanf("%d",&data);
         push(data);
         break;
      case 2:
         printf("Your data is: %d\n",pop());
         break;
      case 3:
         printf("Your top most data is: %d\n",peek());
         break;
      case 4:
         print();
         break;
      case 5:
         exit(0);

      default:
         printf("Invalid Choice \n");
   
    }
  }
  return 0;
}
