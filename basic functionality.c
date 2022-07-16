#include <stdio.h>
#define MAX 5

int stack_arr[MAX];
int top = -1;

void push(int data){
  if(top == MAX-1){
    printf("Stack is full");
    return;
  }
  top++;
  stack_arr[top] = data;
}

int pop(){
  int value;
  if(top == -1){
    printf("stack is empty");
    exit(1);
  }
  value = stack_arr[top];
  top--;
  return value;
}

int peek(){
  if(top == -1){
    printf("stack is empty");
    exit(1);
  }
  return stack_arr[top];
}

void print(){
    int i;
    if(top == -1)
        printf("stack is empty");
        return;

    for(i=top; i>=0; i--){
        printf("%d ",stack_arr[i]);
    }
    printf("\n");
}

int main(){
    int choice, data;

    while(1)
    {

        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.print\n");
        printf("5.exit\n");

        printf("Enter your choice:\n");
        scanf("%d",&choice);

        switch(choice)
        {
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
