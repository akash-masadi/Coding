// reference variables
#include<stdio.h>
void ourswap(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
void ourswap(char &num1, char &num2)
{
    char temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
void ourswap(double &num1, double &num2)
{
    double temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int n1;
    int n2;
    n1 = 23;
    n2 = 34;
    printf("b4 %d %d\n", n1, n2);
    ourswap(n1, n2);
    printf("b4 %d %d\n", n1, n2);

}
