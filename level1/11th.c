// Get 2 digit int input from user and print the sum of ones digit and tens digit. 

#include <stdio.h>
int main (){
    int num,ones,tens,result;
    printf("Get the 2 digit number:");
    scanf("%d",&num);
    ones=num%10;
    tens=num/10;
    result=ones+tens;
    printf("Sum of ones & tens digit number is:%d",result);
    return 0;
}

