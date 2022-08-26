#include <stdio.h>
void main()
{
    int num, temp, sum=0, i=1;

    printf("Enter a number\n");
    scanf("%d", &num);

    while (i<num)
    {
        temp = num%i;
        if (temp == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    if(sum == num)
    {
        printf("perfect");
    }
    else{
        printf("not perfect");
    }
}