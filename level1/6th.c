// Get a two-digit number from user and print the one’s digit.

#include <stdio.h>
int main (){
    int num,ones;
    printf("Enter the 2 digit number:");
    scanf("%d",&num);
    ones=num%10;
    printf("One's digit value is:%d",ones);
    return 0;
}

