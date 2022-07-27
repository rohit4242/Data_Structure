#include <stdio.h>  
#include <string.h>  
#define max 100  

int top = -1;
int str_stack[max];  
  
void push(char x){  
  
  if(top == max-1){  
      printf("stack overflow");  
    }  else {  
      str_stack[++top]=x;  
    }  
  
}  
  
void pop()
{   if(top == -1)
        printf("stack is empty");
        
    printf("%c",str_stack[top--]);  
}  
  
  
void main()  
{  
   char str[50];
   printf("Enter Your String: ");
   gets(str);
   int len = strlen(str),i;  

  
   for(i=0;i<len;i++)  
      push(str[i]);  
  
   for(i=0;i<len;i++)  
      pop();  
}  