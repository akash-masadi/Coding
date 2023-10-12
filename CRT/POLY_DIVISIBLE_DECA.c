#include<stdio.h>
#include<stdlib.h>
void helper(int used[], long long int currValue, int pos)
{
    int possible_digit;
    if ( pos == 10)
    {
        printf("%lld", currValue * 10);
    }
    for( possible_digit = 1; possible_digit < 10; possible_digit +=1)
    {
        if ( used[ possible_digit] == 1)
            continue;
        if ( ( (currValue * 10) + possible_digit) % pos == 0)
        {
           used [ possible_digit ] = 1;
           helper(used, (currValue*10+possible_digit),pos+1);
           used [ possible_digit ] = 0;
        }
    }
}
void polyDivisible(int base)
{
    // set an environment
    int used_flags[ base ];
    int ind;
    for( ind = 0; ind < base; ind+=1)
        used_flags [ ind ] = 0;
    // helper - recursively
    helper( used_flags, 0L, 1);

}
int main()
{

    polyDivisible(10);
    return EXIT_SUCCESS;
}
