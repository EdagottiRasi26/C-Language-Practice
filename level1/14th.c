// Get a three-digit number from user and print the reverse of the number.

#include <stdio.h>
int main(){
    int num,ones,tens,hunds,rev;
    printf("Get the 3 digit number:");
    scanf("%d",&num);
    ones=num%10; //456%10=6
    tens=(num%100)/10; //456%100=56 56/10=5
    hunds=num/100; //456/100=4
    rev=(ones*100)+(tens*10)+(hunds*1);
    printf("Reverse of the 3 digit number is:%d",rev);
}
