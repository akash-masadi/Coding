#include<stdio.h>
#include<stdlib.h>
typedef struct date
{
    int dd;
    int mm;
    int yyyy;
} Date;
void printDate( Date gd)
{
    printf("%d/%d/%d\n", gd.dd, gd.mm, gd.yyyy);
}
#define BAD_DATE 1
#define GOOD_DATE 0
int validate(Date gd)
{
    int days_in_months [] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    days_in_months [ 2 ] =  ( ( (gd.yyyy%4==0) && (gd.yyyy%100!=0)) \
                             || (gd.yyyy % 400 == 0) ) ? 29 : 28;
    if ( gd.yyyy < 1900)
                return BAD_DATE;
    if ( gd.mm < 1 || gd.mm > 12)
        return BAD_DATE;
    if ( gd.dd < 1 || gd.dd > days_in_months[gd.mm])
        return BAD_DATE;

    return GOOD_DATE;


}
int main()
{

    Date today = {30,11,2020};
    Date dob = { 4,8,2003};
    if ( validate( today  ) == BAD_DATE)
        printf("Error!!!!!!");
    printDate( today );
    printDate( dob );
    return EXIT_SUCCESS;
}
