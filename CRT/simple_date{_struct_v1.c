#include<stdio.h>
#include<stdlib.h>
typedef struct date{

int dd;
int mm;
int yyyy;
} Date;
void printDate( Date gd)
{
    printf("%d/%d/%d\n", gd.dd, gd.mm, gd.yyyy);
}
//12.40 12.41
int isGreater(Date gd1, Date gd2)
{
    if ( gd1.yyyy > gd2.yyyy)
        return 1;
    if ( gd2.yyyy > gd1.yyyy)
        return 0;
    if ( gd1.mm > gd2.mm)
        return 1;
    if ( gd2.mm > gd1.mm)
        return 0;
    if ( gd1.dd > gd2.dd)
        return 1 ;
    return 0;
}
int isLesser(Date gd1, Date gd2)
{
    if ( gd1.yyyy < gd2.yyyy)
        return 1;
    if ( gd2.yyyy <gd1.yyyy)
        return 0;
    if ( gd1.mm < gd2.mm)
        return 1;
    if ( gd2.mm < gd1.mm)
        return 0;
    if ( gd1.dd < gd2.dd)
        return 1 ;
    return 0;
}
int isEqual(Date gd1, Date gd2)
{
  int res ;
  res = isGreater(gd1,gd2);
  if(res==1)
    return 0;
  res = isLesser(gd1,gd2);
  return !res;
}
//12.46+
int main()
{
    Date today = {10,10,2023};
    Date tomorrow = {11,10,2023};
    if ( isGreater( tomorrow,today) == 1)
       printf("True\n");
    if ( isLesser( today,tomorrow) == 1)
       printf("True\n");

    if ( isEqual( tomorrow,today) == 1)
       printf("True\n");
       else
        printf("False\n");


    printDate(today);
    printDate(tomorrow);

}
