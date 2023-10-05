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
#define FACTOR_FOUND 1
#define FACTOR_NOT_FOUND 0
int main()
{
// num / check_factor > check_fac
    long long int num;
    long long int check_factor;
    long long int until;
    int factor_found_flag;
    num = 103723971119;
    num = 13791315212531;
    num = 99999999999999997;

    until = sqrt(num);
    factor_found_flag = FACTOR_NOT_FOUND;
    if ( num % 2 == 0 || num % 3 == 0)
    {
        factor_found_flag = FACTOR_FOUND;
    }
    else
    {
        for ( check_factor = 1; (6*check_factor-1) < until ; check_factor+=1)
        {
            if ( num % (6*check_factor-1) == 0 || num % (6*check_factor+1)==0)
            {
                factor_found_flag  = FACTOR_FOUND;
                break;
            }
        }

    }
    if ( factor_found_flag == FACTOR_NOT_FOUND)
        printf("Prime");
    else
        printf("ComposiTE");

    return EXIT_SUCCESS;
}















