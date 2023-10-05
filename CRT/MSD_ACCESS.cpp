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
    num = 6974000;
    nod = 0;
    sod = 0;

    // find the power
    power = 1;
    while ( num / power > 9)
    {
        power *=10;
    }
    while ( power != 0)
    {
          // QUERY
       digit = num / power;
       // PROCESS
       cout <<  digit << " ";
       nod += 1;
       sod += digit;
       // ALTER
       num %= power;
       power/=10;


    }

   cout << endl << nod << '\t' << sod;











   return EXIT_SUCCESS;
}
