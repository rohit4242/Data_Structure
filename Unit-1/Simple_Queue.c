#include <stdio.h>
#define max 50

int queue[max];
int front=-1;
int rear=-1;

void add_value(data){
    if(rear == max-1){
        printf("\nYour queue is empty");
    }
    if(front == -1)
        front = 0;

    rear++;
    queue[rear] = data;
    printf("\nYour data is Inserted");
}
void delete(){
 
    if(rear == front){
        printf("\nYour queue is empty");
    }
    if(front > rear){
        printf("\nYour queue is empty");
        front = rear = -1;
    }
    printf("\n%d is deleted",queue[front]);
    front++;
}
void update(index,data){

    if(rear == max-1){
        printf("\nYour queue is empty");
    }
    queue[index-1] = data;
    printf("\n%d is Updated",queue[data]);

}
void display(){
    int i;
    if(front == max-1)
    {
        printf("\nYour queue is empty");
    }
    for(i=front;i<=rear;i++)
    {
        printf("\n%d",queue[i]);
    }

}

int main()
{
    int ch, data,index,value;
    while (1)
    {
        printf("\n1.Add new value");
        printf("\n2.Delete Value");
        printf("\n3.Update value");
        printf("\n4.Display Value");
        printf("\n5.Exit");

        printf("\nEnter Your Choice: ");
        scanf("\n%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\nEnter Your Value: ");
            scanf("%d",&data);
            add_value(data);
            break;
        case 2:
            delete();
            break;
        case 3:
            printf("\nEnter Your Index number: ");
            scanf("%d",&index);
            printf("\nYour New Value: ");
            scanf("%d",&value);
            update(index,value);
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Input");
        }
    }
    return 0;
}