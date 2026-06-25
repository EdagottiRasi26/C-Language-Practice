// Get a three-digit number from user and print the one’s digit.
#include <stdio.h>
int main(){
    int num,ones;
    printf("Get the 3-digit number from user:");
    scanf("%d",&num);
    ones=num%10; //561%10=1
    printf("The ones digit number is:%d",ones);
    return 0;
}

