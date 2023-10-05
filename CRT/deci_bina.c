#include<stdio.h>
#include<stdlib.h>
int main()
{
    int decinum;
    int rem;
    int power;
    int otherBase;
    int base;
    int safe;

    decinum = 69;
    power = 1;
    otherBase = 0;
    base = 3;
    safe = decinum;
    while(decinum!=0)
    {
    rem = decinum % base;
    otherBase = rem * power + otherBase;
    power *= 10;
    decinum /= base;

    }
    decinum = safe;
    printf("(%d)10 is (%d)%d", decinum, otherBase, base);


    return EXIT_SUCCESS;
}
