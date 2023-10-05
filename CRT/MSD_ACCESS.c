#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    int num;
    int power;
    int nod;
    int sod;
    int digit;
    num = 6974;
    nod = 0;
    sod = 0;

    // find the power
    power = 1;
    while ( num / power > 9)
    {
        power *=10;
    }
    while ( num != 0)
    {
          // QUERY
       digit = num % 10;
       // PROCESS
       cout <<  digit << " ";
       nod += 1;
       sod += digit;
       // ALTER
       num %= power;
       power/=10;


    }










   return EXIT_SUCCESS;
}
