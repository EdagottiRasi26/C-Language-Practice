// Get a two-digit number from user and print the ten’s digit.

#include <stdio.h>
int main(){
    int num,tens;
    printf("Get the 2 digit number from the user: ");
    scanf("%d",&num);
    tens=num/10;
    printf("Ten's digit number is:%d",tens);
    return 0;
}
