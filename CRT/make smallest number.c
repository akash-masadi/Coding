/*
Smallest Possible Integer
Given an integer N, print the smallest possible integer that can be formed using all the digits of N.
Boundary Condition:
1<= N <= 9999999999
Input Format:
The first line contains N.
Output Format:
The first line contains the smallest possible integer that can be formed using all the digits of N.
Sample Input/Output 1:
Input:
45223
Output:
22345
Sample Input/Output 2:
Input:
48903012
Output:
10023489
*/












#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long num;
    long long copy;
    long long newNum;
    int digit;
    num = 40205203; // 20002345
    newNum = 0;
    for( digit = 0; digit < 10; digit+=1)
    {
    copy = num;
    while ( copy != 0)
    {
        if ( copy % 10 == digit)
            newNum = newNum*10 + (copy%10);
        copy/=10;
    }
    }
    long long power1;
    long long power2;
    power1 = 1;
    while ( num / power1 > 9)
    {
        power1 *=10;
    }
    power2 = 1;
    while( newNum / power2 > 9)
    {
        power2 *= 10;
    }
    newNum = (newNum/power2) * power1 + (newNum % power2);
    printf("%lld", newNum);
    return EXIT_SUCCESS;
}
