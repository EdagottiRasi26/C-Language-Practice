// Get a two-digit number from user and print the reverse of the number.

#include <stdio.h>
int main(){
    int num,ones,tens,rev;
    printf("Get the 2 digit number:");
    scanf("%d",&num);
    ones=num%10; //56%10=6
    tens=(num/10); //56/10=5 
    rev=(ones*10)+(tens*1); //6*10+5*1=65
    printf("Reverse of 2 digit number is:%d",rev);
    return 0;
}
