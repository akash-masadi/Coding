// reference variables
#include<stdio.h>
void swap1(int num1, int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    }
int main()
{
    int n1;
    int n2;
    extern int out;
    n1 = 23;
    n2 = 34;
    printf("b4 %d %d\n", n1, n2);
    swap(&n1, &n2);
    printf("b4 %d %d\n", n1, n2);
    printf("%d\n", out);
}
int out=9999;
