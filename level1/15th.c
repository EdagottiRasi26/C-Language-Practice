/*
Get a four-digit number from user and only reverse the 
first two digits of the number, then print the number.

Input: 9561 Output 9516. 
Input: 3859 Output: 3895.
*/

#include <stdio.h>
int main(){
    int num,ones,tens,hunds,thus,rev;
    printf("Get the 4 digit number: ");
    scanf("%d",&num);
    ones=num%10; //9561%10=1
    tens=(num%100)/10; //9561%100=61 61/10=6
    hunds=(num%1000)/100; //9561%1000=561 561/100=5
    thus=num/1000; //9561/1000=9
    rev=(ones*10)+(tens*1)+(hunds*100)+(thus*1000); //1*10+6*1+5*100+9*1000 =9516
    printf("Result after reversing first 2 digits is:%d",rev);
    return 0;
}
