/*
Prime
Loop
2 to sqrt(n)
100
50
10
factors occurs as PAIRS
1....fpf.......sqrt(n)....PAIR......n/fpf....NO FACTOR ZOne n-1 n
1    2  4 5     10       20  25     50
 2..................

*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define RANGE 10000000
#define FACTOR_FOUND 1
#define FACTOR_NOT_FOUND 0
int main()
{
// num / check_factor > check_fac
    int num;
    int check_factor;
    int until;
    int factor_found_flag;
    //printf("%d %d ", 2, 3);
    int primeCtr;
    primeCtr=2;
    for( num = 5 ; num <= RANGE ; num +=2)
    {
    until = sqrt(num);
    factor_found_flag = FACTOR_NOT_FOUND;
    if ( num % 2 == 0 || num % 3 == 0)
    {
        factor_found_flag = FACTOR_FOUND;
    }
    else
    {
        for ( check_factor = 5; check_factor <= until; check_factor+=6)
        {
            if ( num % (check_factor) == 0 || num % (check_factor+2)==0)
            {
                factor_found_flag  = FACTOR_FOUND;
                break;
            }
        }

    }
    if ( factor_found_flag == FACTOR_NOT_FOUND)
       primeCtr+=1;
        //printf("%d ", num);
    }
    printf("%d -> %d", RANGE, primeCtr);
    return EXIT_SUCCESS;
}















