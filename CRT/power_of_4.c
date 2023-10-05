/*
Write a programme to find the number N whose power of 4 ends with number itself.

Hint:-
Power of 4 for number 25=390625  (end digit of 3125 is 25).

Input Format
Input contains an integer �N� denoting the number

Output Format
If the number whose power of 4 ends with the number itself, print �TRUE� otherwise print �FALSE�.
If user enters negative integer, the result should display �Wrong Input�.

Constraints
1 <= N <= 10^8

Sample 1:
Input
5
Output:
TRUE

Sample 2:
Input
4
Output:
FALSE          ( Power of 4 for number 4=256)

Sample 3:
Input
7
Output:
FALSE             ( Power of 4 for number 7=2401)

Sample 4:
Input
-6
Output:
Wrong Input
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    long long int power_4_num;
    int power;
    for ( num = 1; num <= 10000; num +=1)
    {
    power_4_num = 1LL * num * num * num * num;
    power =1 ;
    while ( num >= power)
    {
        power *=10;
    }
    if ( power_4_num % power == num)
        printf("%d ", num);
    }
    return EXIT_SUCCESS;
}












