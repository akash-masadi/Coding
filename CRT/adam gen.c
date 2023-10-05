/*
Adam Number
reverse of square of n =
square pf reverse of n

num		13
sqrNum		169
revnum		31
sqr_revNum	961
rev_sqrnum	961
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{

    int num;
    int sqr_num;
    int rev_num;
    int sqr_rev_num;
    int rev_sqr_num;
    int copy;
    int digit;

    for ( num = 1 ; num <= 1000000; num +=1)
    {
        if ( num % 10 == 0)
            continue;

    // square
    sqr_num = num * num;
    // rev the num
    copy = num;
    rev_num = 0;
    while ( copy != 0)
    {
        digit = copy % 10;
        rev_num = rev_num * 10 + digit;
        copy /=10;
    }
    // square the rev_num
    sqr_rev_num = rev_num * rev_num;
    // rev the sqr_num
    copy = sqr_num;
    rev_sqr_num = 0;
    while ( copy != 0)
    {
        digit = copy % 10;
        rev_sqr_num = rev_sqr_num * 10 + digit;
        copy /=10;
    }
    if ( rev_sqr_num == sqr_rev_num)
        printf("%d ", num);
    }

    return EXIT_SUCCESS;
}
