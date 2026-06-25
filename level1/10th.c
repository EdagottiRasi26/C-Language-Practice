// Get a three-digit number from user and print the hundred’s digit.

#include <stdio.h>
int main()
{
    int num,hun;
    printf("Get the 3 digit number:");
    scanf("%d",&num);
    hun= num/100; //451/100=4
    printf("%d",hun);
    return 0;
}
