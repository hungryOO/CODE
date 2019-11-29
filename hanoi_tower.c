#include <stdio.h>
int count = 0;
void move(char A, char C)
{
    count++;
    printf("%c-->%c\n", A, C);
}
void hanoi(int num, char A, char B, char C)
{
    if(1 == num)
        move(A, C);
    else
    {
        hanoi(num - 1, A, C, B);
        move(A, C);
        hanoi(num - 1, B, A, C);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    hanoi(n, 'a', 'b', 'c');
    printf("count: %d \nn: %d\n", count, n);
    return 0;
}
