/*


6974

4796

4
7
9
6
0*10+4
4*10+7
47*10+9
479*10+6
4796



LSD
10
digit = num % 10;
revnum = revnum * 10 + digit;
num /= 10;








*/






#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int copy_num;
    int digit ;
    int revnum;

    num = 6974;
    revnum = 0;
    copy_num = num;
    while ( num != 0)
    {
    digit = num % 10;
    revnum = revnum * 10 + digit;
    num /= 10;

    }
    num=copy_num;
    printf("%d reversed is %d", num,revnum);


    return EXIT_SUCCESS;
}














