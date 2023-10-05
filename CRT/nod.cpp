#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
   int num;
   int nod;
   int sod;
   int digit;
   num = 6974;
   nod = 0;
   sod = 0;
   while ( num != 0)
   {
       // QUERY
       digit = num % 10;
       // PROCESS
       cout <<  digit << " ";
       nod += 1;
       sod += digit;
       // ALTER
       num /= 10;
   }

   cout << endl << nod << '\t' << sod;

   return EXIT_SUCCESS;
}
