// Get a number from user and subtract 5 to that number and print the result.

#include <stdio.h>
int main(){
    int result,num;
    printf("Get the number from the user:");
    scanf("%d",&num);
    result=num-5;
    printf("Result after subtracting 5 from the number is: %d",result);
    return 0;
}

