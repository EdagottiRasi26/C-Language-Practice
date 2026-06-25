// Get a number from user and multiply 3 to that number and print the result.

#include <stdio.h>
int main(){
    int result,num;
    printf("Get the number from the user:");
    scanf("%d",&num);
    result=num*3;
    printf("Result after multiplying the number with 3 is: %d",result);
    return 0;
}

