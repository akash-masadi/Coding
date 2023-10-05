#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long num;
    long long copy;
    int digit;
    num = 7601534289;
    for( digit = 0; digit < 10; digit+=1)
    {
    copy = num;
    while ( copy != 0)
    {
        if ( copy % 10 == digit)
            break;
        copy/=10;
    }
        if ( copy == 0)
            break;
    }
    if ( digit == 10)
        printf(" %d PAN DIGITAL", digit);
    return EXIT_SUCCESS;
}
