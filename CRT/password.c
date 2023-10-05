/*
David and Ross both work in the same office but in different departments. David needs to share a password
protected file with Ross. David made a minor change to the password so that file cannot be accessed by
anyone else. He interchanged a few digits of the password and shared the new password with a hint to
generate the actual password
Hint:
Reverse all the elements from point A to point B (both A and B inclusive), where point A and B are given
PASSWORD is a Positive Integer
Write an algorithm to reverse the elements of the password to get the actual password so that file can be
opened
Input
First Line  - Converted Password
The next line consists of two space separated integers - startPoint and endPoint representing two points
A and B to reverse the elements
Output
Print The Original Password
Example :
Position 123456789012
         000000000111
         345689012345
         341098652345
3 8
Output:
341098652345
10000 <= n <= 1000000000000000000

  345678
345689012345
3 8

34      568901  2345
first   mid     last
345689012345
  1000000000 p1
first = num / p1
345689012345
       10000   p2
last = num %  p2

mid = (num % p1) / p2
       5689012345 / 10000

1000000000 p1 10^9
10000   p2    10^4






1234567
3 5

12 345 67
P1 10^4
P2 10^2

1234567
/ 10000
  12
1234567
%  100

NOD
P1 = 10^( NOD - POS1)
P2 = 10^(NOD - POS2)
arr[4]
4[arr]
<opr1>[<opr2>]
opr1 - address, opr2 - int
opr1 - int , opr2 - address
int arr[] = {6,9,1,2,4,7}
int *ptr
ptr = arr;
arr[ 3 ]
ptr [ 3 ]
*/
#include<stdio.h>
#include<stdlib.h>
typedef long long int big;
big ourPower(int expo)
{
    big res;
    int multiplyCtr;
    for( res = 1, multiplyCtr = 0; multiplyCtr < expo ; multiplyCtr++)
    {
        res *= 10;
    }
    return res;
}
int number_of_digits(big data)
{
    int nod;
    big copy_data;
    for( copy_data = data, nod = 0; copy_data ; copy_data/=10, nod++);
    return nod;
}
big rev(big data)
{
    big revData;
    big copy_data;
    for( copy_data = data, revData = 0; copy_data ; copy_data /= 10)
    {
        revData = revData * 10 + (copy_data % 10);
    }
    return revData;
}
int main()
{
    big num;
    big pow1;
    big pow2;
    big first;
    big mid;
    big last;
    int posA;
    int posB;
    int digit;
    big copy;
    int nod;
    num = 345689012345;
    printf("\n%lld",num);

    posA = 3;
    posB = 8;
    nod = number_of_digits( num );
    pow1 = ourPower(nod-posA+1);
    pow2 = ourPower(nod -posB);
    first = num / pow1;
    last = num % pow2;
    mid = (num % pow1) / pow2;
    printf("DEBUG first %lld mid %lld last %lld\n", first,mid, last);
    mid = rev( mid );
    num = first * (pow1) + mid * pow2 + last;
    printf("\n%lld",num);







}














