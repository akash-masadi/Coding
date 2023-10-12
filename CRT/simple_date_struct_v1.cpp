#include<stdio.h>
#include<stdlib.h>
typedef struct date Date;

typedef struct date

{

int dd;
int mm;
int yyyy;

void printDate( )
{
    printf("%d/%d/%d\n", dd, mm, yyyy);
}
//12.40 12.41
int isGreater(Date gd)
{
    if ( yyyy > gd.yyyy)
        return 1;
    if ( gd.yyyy > yyyy)
        return 0;
    if ( mm > gd.mm)
        return 1;
    if ( gd.mm > mm)
        return 0;
    if ( dd > gd.dd)
        return 1 ;
    return 0;
}
int isLesser(Date gd)
{
    if ( yyyy < gd.yyyy)
        return 1;
    if ( gd.yyyy < yyyy)
        return 0;
    if ( mm < gd.mm)
        return 1;
    if ( gd.mm < mm)
        return 0;
    if ( dd < gd.dd)
        return 1 ;
    return 0;
}
int isEqual(Date gd)
{
   if( yyyy == gd.yyyy && mm == gd.mm && dd == gd.dd )
    return 1;
   return 0;
}
} Date;

int main()
{
    Date today = {10,10,2023};
    Date tomorrow = {11,10,2023};
    if ( tomorrow.isGreater(today) == 1)
       printf("True\n");
    if ( today.isLesser(tomorrow) == 1)
       printf("True\n");

    if ( tomorrow.isEqual(today) == 1)
       printf("True\n");
       else
        printf("False\n");


    today.printDate();
    tomorrow.printDate();

}
