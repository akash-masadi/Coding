/*
            A       B       C
            a       b       c
1           a-b     2b      c
2           a-b     2b-c    2c
3           2(a-b)  2b-c    2c - (a-b)

            16      16      16
48
A   2(a-b) = 16
B   2b-c   = 16
C   2c - (a-b) = 16
2c - 8 = 16
2c = 24
c = 12

2b - 12 = 16
2b = 28
b = 14


Take as much as in B from A and add to B
Take as much as in C from B and add to C
Take as much as in A from C and add to A
i
1
2
3
        16      16      16
        8       16      24
        8       28      12
        22      14      12
10/10/2023

AD
Anno Domini

epoch
Date


Date today;
today = makeDate(10,10,2023);
printDate(today);
(yyyy - 1980 ) * 512 + mm * 32 + dd
2023 - 1980 * 512 + 10 * 32 + 10

                                 <---dd------->
15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00
                     <---mm---->
<---yyyy-1980------>


                        seconds/2 5
                        minutes   6
                        hours     5
                               17
15 14 13 12 11 10 09 08 07 06 05 04 03 02 01 00
hours * 2048 + minutes * 32 + (seconds/2)
*/





#include<stdio.h>

typedef struct date IT_DATE;
typedef struct date
{
    unsigned short date_folded;

    void makeDate(int dd, int mm, int yyyy)
    {
        date_folded = (yyyy-1980)*512+mm*32+dd;
    }
    void printDate()
    {
        int dd;
        int mm;
        int yyyy;
        yyyy = date_folded / 512 + 1980;
        mm = (date_folded%512)/32;
        dd = (date_folded%512)%32;
        printf("%d/%d/%d", dd,mm,yyyy);
    }

    int isGreater(IT_DATE gd)
    {
        return date_folded > gd.date_folded;
    }
    int isLesser(IT_DATE gd)
    {
        return date_folded < gd.date_folded;
    }
    int isEqual(IT_DATE gd)
    {
        return date_folded == gd.date_folded;
    }
} IT_DATE;



int main()
{
    IT_DATE today;
    today.makeDate(10,10,2023);
    today.printDate();
    unsigned short d = 2023 << 9;
    printf("%d\n",d );
}



/*

43 10 10
43 10 11
43 11

*/



















