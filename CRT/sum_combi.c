/*

6974

6 9 7 4
69 97 74
697 974
6974
sub number








 59123
 3 2 1 9 5      20
 59123
 23 12  91  59
 59123
 123 912 591
 59123
 9123 5912
 59123
  num          spl_power       num
 59123          10              0       1
 59123          100             5       10
 59123          1000            59 (59123,5912,591,59)
 59123          10000           591   (59123,5912,591)
 59123          100000          5912
               spl_power
 59123          10
 % spl_power
 3
 59123/10
 5912
 % spl_power
 2
 5912/10
 591
 % spl_power
 1
 591/10
 59
 % spl_power
 9
 59/10
 5
 % spl_power
 5
 5/10
 0

 spl_power
 100
 59123
 % spl_power
 23
 59123/10
 5912
 % spl_power
 12
 5912/10
 591
 % spl_power
 91
 591/10
 59
 % spl_power
 59
 59/10
 5


 spl_power
 1000
 59123
 % spl_power

 123
 59123/10
 5912
 % spl_power
 912
 5912/10
 591
 % spl_power
 591
 591/10
 59

 spl_power
 10000
 59123
 % spl_power

 9123
 59123/10
 5912
 % spl_power
 5912
 5912/10
 591


 spl_power
 100000
 59123
 % spl_power
 59123
 59123/10
 5912


 59123          10000           1000
 59123
 9123
 5912
 5912
 591



 59123          1000            100
 123
 5912
 912
 591
 591
 59









i didnt say you were stupid
hang him not spare him
articulation

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{

    int num;
    int spl_power;
    int copy_num;
    int sum;
   int digits;
    num = 59123;
    // 6
    // 53
    // 312
    // 1 2 3
    // 12 23
    // 123 + 41
    sum = num;
    spl_power = 10;
    while ( num > spl_power) // 123/10 123/100 1000
    {
     copy_num = num;
    while( copy_num >= (spl_power/10))
    {
        digits = (copy_num % spl_power);
        sum += digits;
        copy_num /= 10;
    }
    spl_power*=10;
    }
    printf("%d", sum);


    return EXIT_SUCCESS;
}












