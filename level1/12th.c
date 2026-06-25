// Get a three-digit number from user and print sum the digits.

#include <stdio.h>
int main(){
    int num,ones,tens,hunds,result;
    printf("Get the 3 digit number:");
    scanf("%d",&num);
    ones=num%10; //456%10=6
    tens=(num%100)/10; //456%100=56 56/10=5
    hunds= num/100; //456/100=4
    result=(ones+tens+hunds);
    printf("sum of 3 digit number is:%d",result);
    return 0;
}

