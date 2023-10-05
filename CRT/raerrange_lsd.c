/*
178255
5

        5       0
17825
5
        5*10 + 5        0
1782
2                       2*1 + 0
       55               2
178
8       55              8*10+2  82
17
7       7*100 + 55 755          82
1
1
        1*1000 + 755 1755       82
        1755            82
        1755 * 100 + 82
        175582

        evenPart
        oddPart
        evenPower
        oddPower
digit       eprt        oprt            ep          op
             0            0             1           1
 5
             0            5             1           10
 5           0            55            1           100
 2           2            55            10          100
 8          82            55            100         100
 7          82           755            100         1000
 1          82          1755            100         10000


178255
     ^
175582

178255

5

17825

5

1782

2

178


*/


#include<stdio.h>
#include<stdlib.h>
typedef long long int Big;
int main()
{

    Big num;
    Big evenPart;
    Big oddPart;
    Big evenPower;
    Big oddPower;
    int digit;
    Big res;
    num = 1234567890123456;
    oddPart = 0;
    evenPart = 0;
    evenPower = 1;
    oddPower = 1;
    while ( num )
    {
        digit = num % 10;
        if ( digit % 2 == 0)
        {
            evenPart = digit * evenPower + evenPart;
            evenPower *= 10;
        }
        else
        {
            oddPart = digit * oddPower + oddPart;
            oddPower*=10;
        }
        num/=10;
    }

    res = oddPart * evenPower + evenPart;
    printf("%lld %lld -> %lld", oddPart, evenPart, res);














    return EXIT_SUCCESS;
}














