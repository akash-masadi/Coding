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
    #define BAD_DATE 1
    #define GOOD_DATE 0
    int validate()
    {
        int days_in_months [] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        days_in_months [ 2 ] =  ( ( (yyyy%4==0) && (yyyy%100!=0)) \
                                 || (yyyy % 400 == 0) ) ? 29 : 28;
        if ( yyyy < 1900)
                    return BAD_DATE;
        if ( mm < 1 || mm > 12)
            return BAD_DATE;
        if ( dd < 1 || dd > days_in_months[mm])
            return BAD_DATE;

        return GOOD_DATE;


    }
    bool isGreater(Date gd)
    {
        if ( yyyy > gd.yyyy)
            return true;
        if (yyyy < gd.yyyy)
                return false;
        if ( mm > gd.mm)
            return true;
        if ( mm < gd.mm )
            return false;
        if ( dd > gd.dd)
            return true;
        if( dd <= gd.dd)
            return false;

    }
} Date;
int main()
{

    Date today = {90,11,2020};
    Date dob = { 4,8,2003};
    if ( today.validate()== BAD_DATE)
        printf("Error!!!!!!");
    today.printDate();
    dob.printDate();
    if ( today.isGreater(dob))
        printf("True");
    else
        printf("False");
    return EXIT_SUCCESS;
}
