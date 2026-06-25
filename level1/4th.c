// Get a number from user and divide by the number by 6 and print the quotient.

#include <stdio.h>
int main(){
    int result,num;
    printf("Get the number from the user:");
    scanf("%d",&num);
    result=num/6;
    printf("Quotient after divinding the number by 6 is: %d",result);
    return 0;
}

