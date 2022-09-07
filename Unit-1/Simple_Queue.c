#include <stdio.h>
#include <conio.h>

#define max 50

int queue[max];
int front=-1;
int rear=-1;

void add_value(data){
    if(rear == max-1){
	printf("\nYour queue is full");
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
	printf("\nYour queue is full");
    }
    if(front == -1){
	printf("\nYour queue is empty");
    }
    queue[index-1] = data;
    printf("\n%d is Updated",queue[index-1]);

}
void display(){
    int i;
    if(front == -1)
    {
	printf("\nYour queue is empty");
    }
    for(i=front;i<=rear;i++)
    {
	printf("\n%d",queue[i]);
    }

}
void displayOddNumber(){
    int i;
    if(front == -1)
    {
	printf("\nYour queue is empty");
    }
    for(i=front;i<=rear;i++)
    {
	if(queue[i]%2==0){
		continue;
	}
	else{
		printf("\n%d",queue[i]);
	}

    }

}

void displayEvenNumber(){
    int i;
    if(front == -1)
    {
	printf("\nYour queue is empty");
    }
    for(i=front;i<=rear;i++)
    {
	if(queue[i]%2==0){
		printf("\n%d",queue[i]);
	}
    }

}
void main()
{
    int ch, data,index,value;
    while (1)
    {
	printf("\n=================");
	printf("\n1.Add new value");
	printf("\n2.Delete Value");
	printf("\n3.Update value");
	printf("\n4.Display Value");
	printf("\n5.Display Odd Value");
	printf("\n6.Display Even Value");
	printf("\n7.Exit");
	printf("\n=================");

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
	    displayOddNumber();
	    break;
	 case 6:
	    displayEvenNumber();
	    break;
	 case 7:
	    exit(1);
	default:
	    printf("Invalid Input");
	}
    }
    getch();
}
