/*

Accept two strings one call to scanf

buffer
this is a test sentence\n
str1 = this is a test sentence
buffer
\n
buffer
EMPTY
*/
#include<stdio.h>
int main()
{
    char str1[1000];
    char str2[1000]= "from Telengana";
//scanf("%[a-zA-Z0-9 ]", str1); // [scanset] [^] s
    // Bindhu Gourishetty
    // word 34 67.34
    // %s %d %f
    scanf("%[^\n]%*c%[^\n]",str1,str2); // ^ is NOT
    printf("%s\n%s", str1,str2);
}
