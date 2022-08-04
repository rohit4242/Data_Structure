#include <stdio.h>

void transfer(int n,char A,char B,char C)
{
    if(n==1)
    {
        printf("\n Move disk 1 from %c to %c", A, C);
        return 0;
    }
    transfer(n-1, A, C, B);
    printf("\n Move disk %d from rod %c to rod %c", n, A, C);
    transfer(n-1, B, C, A);
}
        
int main()
{
    int n = 4;
    transfer(n, 'A', 'B', 'C'); 
    return 0;
}
