/*
Read the phone number, and print digit by digit

638323669

Six Three Eight Three Two Three Six Six One Nine
6383236619
MSD
1) Find the power
2) Divide and get the Digit
3) Process
4) Get remainder and update the number
5) reduce the power
6) Loop

6974
180538
10^nod-1
6974/1			6974
6974/10			697
6974/100		69
6974/1000		6

6974 / 1000			6
6974 % 1000
974
100

974 / 100			9
process
974%100
74
10

74 /10				7
74%10
4
1

4/1				4
0
0



*/
#include<stdio.h>
#include<stdlib.h>
typedef long long int ll;

int main()
{
    ll phoneNum;
    ll power;
    int digit;
    phoneNum = 1800358;
    power = 1;
    while ( phoneNum / power > 9)
    {
        power *= 10;
    }
 while ( power != 0)
 {
 digit = phoneNum / power;
 switch ( digit)
 {
     case 0 : printf("Zero "); break;
     case 1 : printf("One "); break;
     case 2 : printf("Two "); break;
     case 3 : printf("Three "); break;
     case 4 : printf("Four "); break;
     case 5 : printf("Five "); break;
     case 6 : printf("Six "); break;
     case 7 : printf("Seven "); break;
     case 8 : printf("Eight "); break;
     case 9 : printf("Nine "); break;
 }
 phoneNum = phoneNum % power;
 power /= 10;

 }

 return EXIT_SUCCESS;
}



/*
LSD
power 10
% and get the digit
process
update by division


MSD
find the power
/ and get the digit
process
update by %
reduce power
*/










