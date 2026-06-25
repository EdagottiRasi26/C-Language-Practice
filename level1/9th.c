// Get a three-digit number from user and print the hundred’s digit.

#include <stdio.h>
int main(){
    int num,tens;
    printf("Get the 3 digit number:");
    scanf("%d",&num);
    tens=(num/10)%10; //451/10=45 45%10
    printf("%d",tens);
    return 0;
}
