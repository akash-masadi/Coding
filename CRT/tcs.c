/*
A game development company wants to design a brain game application for kids. There are different types of tasks to be designed for the game. Among all the tasks, there is one task in which each digit of an existing number has to be replaced with another digit. Consider the following table
Existing Numbers: 0 1 2 3 4 5 6 7 8 9
Replace by      : 9 8 7 6 5 4 3 2 1 0
Digit 0 has to be replaced with 9,  1 has to be replaced with 8, 2 has to be replaced with 7 and the rest of the numbers have to be replaced accordingly
Constraints
0<=N<=1000000
The system should generate a message as "Wrong Input" if the value of N is out of range
Example 1
Input
105201		6974		12345		1000
Output
894798		3025		87654		8999
Example 2
Input
10000001
Output
Wrong Input
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    int power;
    int result;
    scanf("%d", &num);
    power = 1;
    while ( num >= power)
    {
        power *= 10;
    }
    result  = (power - 1 ) - num;
    printf("%d %d", num, result);

    return EXIT_SUCCESS;
}











