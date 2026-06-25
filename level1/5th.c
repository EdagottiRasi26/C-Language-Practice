//Get a number from user and divide by the number by 8 and print the remainder.

#include <stdio.h>
int main(){
    int result,num;
    printf("Get the number from the user:");
    scanf("%d",&num);
    result=num%8;
    printf("Remainder after divinding the number by 8 is: %d",result);
    return 0;
}

