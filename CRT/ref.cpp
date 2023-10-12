/*

cin
is an Object

istream
cout
is an object
ostream

#include<iostream>
std::cout
std::cin
using namespace std;


reference variables ALIAS
int const num
const int num
int const * ptr;
const int * ptr;
const int * const ptr;
*/

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    cout << "Welcome to C++ - with a Change" << endl;
    // << insertion
    // >> extraction
    int num;
    int &another_name_to_num=num;
    num = 10;
    cout << another_name_to_num << endl;
    another_name_to_num += 10;
    cout << num << endl ;
    printf("%u %u\n", &num, &another_name_to_num);
 }











